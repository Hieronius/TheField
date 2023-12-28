//
//  BubbleSort.c
//  TheField
//
//  Created by Арсентий Халимовский on 16.12.2023.
//

#include <stdio.h>

// just replace "<" to ">" in line 15 to get ascending/descending order

//void bubbleSort(int *num, int size) {
//    for (int i = 0; i < size - 1; i++) {
//        for (int j = (size - 1); j > i; j--) {
//            if (num[j - 1] < num[j]) { // if current element is smaller than the previous one
//                int temp = num[j - 1]; // let's replace one with the other one
//                num[j - 1] = num[j];
//                num[j] = temp;
//            }
//        }
//    }
//}

//void bubbleSortByPointers(int *num, int size) {
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
