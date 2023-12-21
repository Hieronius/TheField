//
//  Task 152.c
//  TheField
//
//  Created by Арсентий Халимовский on 15.12.2023.
//

// MARK: TASK 152

// I should check is there the same numbers in the array

// 2 4 6 2 4 6 1 1 1 1
// 1 3 5 7 9 11 13 15 17 19
// 1 2 2 5 8 10 15 20 25 30

//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//#define SIZE 10
//
//int main() {
//    int array[SIZE];
//    int isMatched = false;
//    
//    printf("Enter an array of %d numbers:\n", SIZE);
//    
//    for (int i = 0; i < SIZE; i++) {
//        scanf("%d", array + i);
//    }
//    
//    printf("Display the content of an array:\n");
//    
//    for (int i = 0; i < SIZE; i++) {
//        if (isMatched) {
//            break;
//        }
//        for (int j = i + 1; j < SIZE; j++) {
//            if (*(array + i) == *(array + j)) {
//                printf("it's a match!\n");
//                printf("%d and %d are matched\n", *(array + i), *(array + j));
//                isMatched = true;
//                break;
//            }
//        }
//    }
//    
//    if (isMatched) {
//        printf("There are some matched numbers\n");
//    } else {
//        printf("Only unique numbers here\n");
//    }
//    
//    return 0;
//}
