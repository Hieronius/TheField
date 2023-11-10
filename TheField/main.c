//
//  main.c
//  TheField
//
//  Created by Арсентий Халимовский on 07.10.2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// #include "door_struct.h"

#define DOORS_COUNT 15
#define MAX_ID_SEED 10000

// Define door struct
struct door {
    int id;
    int status;
};

void initialize_doors(struct door* doors);

int main() {
    // Create an array of struct door with DOORS_COUNT amount of elements
    struct door doors[DOORS_COUNT];
    // Use an algorithm to iterate through the array
    initialize_doors(doors);
    
    return 0;
}

void initialize_doors(struct door* doors) {
    
    srand(time(0));
    /// seed - it's a number (or vector) used to initialize a pseudorandom number generator
    int seed = rand() % MAX_ID_SEED;
    // An algorithm to iterate through an array of doors
    for (int i = 0; i < DOORS_COUNT; i++) {
        doors[i].id = (i + seed) % DOORS_COUNT;
        doors[i].status = 0;
        printf("%d, %d\n", doors[i].id, doors[i].status);
    }
    for (int i = 0; i < DOORS_COUNT; i++) {
        for (int j = 0; j < DOORS_COUNT; j++) {
            if (doors[i].id > doors[j].id) {
                int copy = doors[i].id;
                doors[i].id = doors[j].id;
                doors[j].id = copy;
            }
        }
    }
}


