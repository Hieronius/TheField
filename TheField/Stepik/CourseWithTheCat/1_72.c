//
//  1_72.c
//  TheField
//
//  Created by Арсентий Халимовский on 24.12.2023.
//

#include <stdio.h>
#include <stdlib.h>

// position - address of the pointer to first element E in an array which is accepts our condition
// func returns 0 if the element wasn't found

//int array_contains(int* array, int* limit, int** position) {
//    if (array >= limit) { // if empty return 0
//        return 0;
//    }
//    *position = array;
//    for (int *current = array + 1; current < limit; current = current + 1) {
//        if (predicate(*current)) {
//            *position = current;
//            return 1;
//        }
//    }
//    return 0;
//}
