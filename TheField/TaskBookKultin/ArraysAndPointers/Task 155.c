//
//  Task 155.c
//  TheField
//
//  Created by Арсентий Халимовский on 17.12.2023.
//

// MARK: TASK 155

// 1 3 5 7 9
// 2 4 6 8 10

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#define SIZE 5

//void bubbleSortByPointers(int *num, int size);
//
//int main() {
//    int arr1[SIZE];
//    int arr2[SIZE];
//    int arr3[SIZE * 2];
//
//    printf("The unification of two ordered arrays by ascending order\n");
//
//    printf("Enter %d numbers of the first array -> ", SIZE);
//    for (int i = 0; i < SIZE; i++) {
//        scanf("%d", arr1 + i);
//    }
//
//    printf("Display the content of the first array:\n");
//    for (int i = 0; i < SIZE; i++) {
//        printf("%d", *(arr1 + i));
//    }
//
//    printf("Enter %d numbers of the second array -> ", SIZE);
//    for (int i = 0; i < SIZE; i++) {
//        scanf("%d", arr2 + i);
//    }
//
//    printf("Display the content of the second array:\n");
//    for (int i = 0; i < SIZE; i++) {
//        printf("%d", *(arr2 + i));
//    }
//
//    printf("The result of unification is:\n");
//
//    // 1. Add first array
//    for (int i = 0; i < SIZE; i++) {
//        *(arr3 + i) = *(arr1 + i);
//    }
//
//    // 2. Add second array
//    for (int i = 0; i < SIZE; i++) {
//        *(arr3 + i + SIZE) = *(arr2 + i);
//    }
//
//    // 3. Sort of the united array
//    bubbleSortByPointers(arr3, SIZE * 2);
//
//    // 4. Print the result of unification
//    for (int i = 0; i < SIZE * 2; i++) {
//        printf("%d", *(arr3 + i));
//    }
//
//    return 0;
//}
//
//void bubbleSortByPointers(int *num, int size) {
//    for (int i = 0; i < size - 1; i++) {
//        for (int j = (size - 1); j > i; j--) {
//            if (*(num + j - 1) > *(num + j)) { // if current element is smaller than the previous one
//                int temp = *(num + j - 1); // let's replace one with the other one
//                *(num + j - 1) = *(num + j);
//                *(num + j) = temp;
//            }
//        }
//    }
//}
