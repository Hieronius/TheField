//
//  DirectSortSort.c
//  TheField
//
//  Created by Арсентий Халимовский on 16.12.2023.
//

#include <stdio.h>

// replace "<" to ">" in line 21 if you wan't to change ascending/descending order

//void directChoiceSort(int *num, int size) {
//    int min;
//    int temp;
//    
//    for (int i = 0; i < size - 1; i++) {
//        min = i; // memorize the index of the current element
//        
//        // let's find a minimum element so we can store it in MIN
//        for (int j = i + 1; j < size; j++) {
//            if (num[j] < num[min]) { // if element smaller than the MIN one
//                min = j; // memorize it's index and store it in MIN
//            }
//        }
//        // replace i-index element with MIN element
//        temp = num[i];
//        num[i] = num[min];
//        num[min] = temp;
//    }
//}

//void directChoiceSortByPointers(int *num, int size) {
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
