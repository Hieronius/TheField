//
//  main.c
//  TheField
//
//  Created by Арсентий Халимовский on 07.10.2023.
//

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MOORE_SEARCH_DEPTH 1

#define WORLD_WIDTH 50
#define WORLD_HEIGHT 50

#define LOOP_ADVANCE_DELAY 100

typedef struct {
    bool* readCells;
    bool* writeCells;

    size_t width;
    size_t height;

} World;

// All write operations are done to writeArray, and all read operations are read from
//  read array.

// Returns a pointer to a newly allocated World with the given dimensions
World* newWorld(size_t width, size_t height);

// Gets/Sets the Cell at the given position
void setCell(World* world, size_t x, size_t y, bool isAlive);
bool getCell(World*, size_t x, size_t y);

// Returns a char array representing the World
char* formatWorld(World*);
// Helper that prints the array returned from the function
void printWorld(World*);

// Advances the world by one "tick"
void advanceWorld(World*);

// Returns a representation of a non-ragged 2D array with the given dimensions
//  where all the cells are dead
bool* newDeadCells(size_t width, size_t height) {
    bool* cells = malloc(sizeof(bool) * width * height);

    for (size_t i = 0; i < (width * height); i++) {
        cells[i] = false;
    }

    return cells;
}

World* newWorld(size_t width, size_t height) {
    World* w = malloc(sizeof(World));

    w->width = width;
    w->height = height;

    w->readCells = newDeadCells(width, height);
    w->writeCells = newDeadCells(width, height);

    return w;
}

// Randomizes the cells so that each cell has an aliveChance chance of being alive
void randomizeCells(World* world, float aliveChance) {
    size_t width = world->width;
    size_t height = world->height;

    for (size_t i = 0; i < (width * height); i++) {
        world->readCells[i] = (rand() % 100) < aliveChance * 100;
    }
}

// Overwrites the readable cells with the writable cells
void copyWritableToReadable(World* world) {
    memcpy(world->readCells, world->writeCells,
        sizeof(bool) * world->width * world->height);
}

// Frees the given World and any memory associated with it
void freeWorld(World* world) {
    free(world->readCells);
    free(world->writeCells);
    free(world);
}

size_t indexOf(size_t width, size_t x, size_t y) {
    return width * y + x;
}

void setCell(World* world, size_t x, size_t y, bool isAlive) {
    size_t index = indexOf(world->width, x, y);

    world->writeCells[index] = isAlive;
}

bool getCell(World* world, size_t x, size_t y) {
    int index = indexOf(world->width, x, y);

    return world->readCells[index];
}

// Returns the number of live neighbors surrounding the given position.
// depth returns how many squares to look in each direction. 1 = Standard Moore Neighborhood.
size_t nAliveNeighborsSurrounding(World* world, size_t x, size_t y, size_t depth) {
    size_t xBound = min(x + depth + 1, world->width);
    size_t yBound = min(y + depth + 1, world->height);

    size_t aliveCount = 0;
    for (size_t ny = max(0, y - depth); ny < yBound; ny++) {
        for (size_t nx = max(0, x - depth); nx < xBound; nx++) {

            if (getCell(world, nx, ny) && !(nx == x && ny == y)) {
                aliveCount++;
            }
        }
    }

    return aliveCount;
}

bool cellShouldLive(bool isAlive, size_t nNeighbors) {
    return (isAlive && nNeighbors >= 2 && nNeighbors <= 3)
        || (!isAlive && nNeighbors == 3);
}

// Decides if a cell should live or die, and sets it accordingly
void advanceCellAt(World* world, size_t x, size_t y) {
    size_t nNeighbors = nAliveNeighborsSurrounding(world, x, y, MOORE_SEARCH_DEPTH);
    bool isAlive = getCell(world, x, y);

    setCell(world, x, y, cellShouldLive(isAlive, nNeighbors));
}

void advanceWorld(World* world) {
    size_t width = world->width;
    size_t height = world->height;

    for (size_t y = 0; y < height; y++) {
        for (size_t x = 0; x < width; x++) {
            advanceCellAt(world, x, y);
        }
    }

    copyWritableToReadable(world);
}

char* formatWorld(World* world) {
    size_t width = world->width;
    size_t height = world->height;

    size_t nCells = width * height;

    // total cells needed + extra for newlines + NL term
    size_t buffSize = sizeof(char) * nCells + height + 1;
    char* buffer = malloc(buffSize);
    buffer[buffSize - 1] = '\0';

    size_t i = 0;
    for (size_t y = 0; y < height; y++) {
        for (size_t x = 0; x < width; x++) {
            bool isAlive = getCell(world, x, y);
            char rep = isAlive ? '#' : ' ';
            buffer[i] = rep;

            i++;
        }

        buffer[i] = '\n';

        i++;
    }

    return buffer;
}

void printWorld(World* world) {
    char* formatted = formatWorld(world);
    printf("%s", formatted);
    free(formatted);
}

void simpleConsoleRoutine() {
    srand(NULL);

    World* world = newWorld(WORLD_WIDTH, WORLD_HEIGHT);
    randomizeCells(world, 0.3);

    // Leaving it with a counter so I can limit it easily later
    for (size_t i = 0; ; i++) {
        printWorld(world);
        printf("----------\n");

        advanceWorld(world);

        Sleep(LOOP_ADVANCE_DELAY);
    }

    // No need to free world?
}

int main() {
    simpleConsoleRoutine();
}
