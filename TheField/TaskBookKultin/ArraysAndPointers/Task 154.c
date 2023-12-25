//
//  Task 154.c
//  TheField
//
//  Created by Арсентий Халимовский on 16.12.2023.
//

// MARK: TASK 154

// 9 3 1 10 5 25 2 3 8 1

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#define SIZE 10

//void bubbleSort(int *num, int size);
//
//int main() {
//    int array[SIZE];
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
//        printf("%d\n", *(array + i));
//    }
//    
//    printf("Use bubble sort to make an array as negative sequence of numbers:\n");
//    
//    bubbleSort(array, SIZE);
//    
//    printf("Display the content of choice sort:\n");
//    
//    for (int i = 0; i < SIZE; i++) {
//        printf("%d\n", *(array + i));
//    }
//    
//    return 0;
//}
//
//void bubbleSort(int *num, int size) {
//    for (int i = 0; i < size - 1; i++) {
//        for (int j = (size - 1); j > i; j--) {
//            if (*(num + j - 1) < *(num + j)) { // if current element is smaller than the previous one
//                int temp = *(num + j - 1); // let's replace one with the other one
//                *(num + j - 1) = *(num + j);
//                *(num + j) = temp;
//            }
//        }
//    }
//}
