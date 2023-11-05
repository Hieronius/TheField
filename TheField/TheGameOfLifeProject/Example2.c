//
//  Example2.c
//  TheField
//
//  Created by Арсентий Халимовский on 04.11.2023.
//

//#include <stdio.h>
//
//#define MAX_ROWS int
//#define MAX_COLUMNS 32
//
//#define ALIVE 'X'
//#define DEAD '.'
//
//
//typedef struct {
//    unsigned short rows;
//    unsigned short columns;
//    unsigned MAX_ROWS current[MAX_COLUMNS];
//    unsigned MAX_ROWS next[MAX_COLUMNS];
//
//} Field;
//
//int getLiving3x3Count(Field *field, short x, short y);
//int isAlive(Field *field, unsigned short x, unsigned short y);
//void drawField(Field *field);
//
//int main(void)
//{
//
//    // Create 20x20 field.
//    Field fieldMatrix = {
//        .rows = 20,
//        .columns = 20,
//    };
//
//    setAllDead(&fieldMatrix);
//    fieldMatrix.current[0] = 2;// . X .
//    fieldMatrix.current[1] = 4;// X . .
//    fieldMatrix.current[2] = 7;// X X X
//
//    int ch;
//
//    while (1)
//    {
//        drawField(&fieldMatrix);
//
//        printf("        Select one of the following options:\n");
//        printf("        (enter) Step\n        (any)   Exit\n");
//        
//        ch = getchar();
//
//
//        if (ch != '\n') {
//            break;
//        }
//        createNextGeneration(&fieldMatrix);
//        update(&fieldMatrix);
//
//    }
//    return 0;
//}
//void drawField(Field *field)
//{
//    
//    for (short c=0;c<field->columns;c++) {
//        for (short r=field->rows;r>=0;r--) {
//            if ((field->current[c] & (1<<r)) >= 1) {
//                printf("%c ",ALIVE);
//            } else {
//                printf("%c ",DEAD);
//            }
//        }
//        printf("%u\n",field->current[c]);// Debug
//    }
//}
//
//*/
//int isAlive(Field *field, unsigned short x, unsigned short y)
//{
//   if ((field->current[y] & (1<<x)) >= 1) {
//       return 1;
//   } else {
//       return 0;
//   }
//}
//
///*
//* Description: Get living cells around (3x3) cell at position.
//* Input:       Field struct and Position of middle cell.
//* Output:      The amount of living cells.
//*/
//int getLiving3x3Count(Field *field, short x, short y)
//{
//   int sum = 0;
//   unsigned MAX_ROWS tmp;
//
//   unsigned MAX_ROWS mask = 1<<(x-1) | 1<<x | 1<<(x+1);// Mask of bits
//   
//   for (short c=y-1;c<(y+2);c++) {
//       if (c < 0 || c >= field->rows) {// Skip if out-of-bounds
//           continue;
//       }
//
//       tmp = field->current[c] & mask;// Grap row and mask
//       tmp = tmp >> (x-1);// Shift to very right
//
//       sum += (tmp & 1) + ((tmp>>1) & 1) + ((tmp>>2) & 1);// Count bits
//   }
//   return sum;
//}
