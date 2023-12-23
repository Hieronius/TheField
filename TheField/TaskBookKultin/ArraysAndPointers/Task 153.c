//
//  Task 153.c
//  TheField
//
//  Created by Арсентий Халимовский on 16.12.2023.
//

// MARK: TASK 153

// 9 3 1 10 5 25 2 3 8 1

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#define SIZE 10

//void directChoiceSort(int *num, int size);
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
//    printf("Use direct choice sort to make an array as negative sequence of numbers:\n");
//    
//     directChoiceSort(array, SIZE);
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
//void directChoiceSort(int *num, int size) {
//    int max;
//    int temp;
//    
//    for (int i = 0; i < size - 1; i++) {
//        max = i; // memorize the index of the current element
//        
//        // let's find a minimum element so we can store it in MIN
//        for (int j = i + 1; j < size; j++) {
//            if (*(num + j) > *(num + max)) { // if element smaller than the MIN one
//                max = j; // memorize it's index and store it in MIN
//            }
//        }
//        // replace i-index element with MIN element
//        temp = *(num + i);
//        *(num + i) = *(num + max);
//        *(num + max) = temp;
//    }
//}
