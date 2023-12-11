//
//  FindMinimumValueInArrayWithPointers.c
//  TheField
//
//  Created by Арсентий Халимовский on 03.12.2023.
//

//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int array_min(int* array, int* limit, int** min);
//
//int main() {
//    int array[] = {4, 29, 42, 2, 3};
//    int* lmin = NULL;
//    // sizeof(array) returns lenght in bytes
//    // sizeof(array[0]) or sizeof(int) - the size of a single element
//    int* limit = array + sizeof(array)/sizeof(array[0]);
//    if (array_min(array, limit, &lmin)) {
//        printf("Min is: %d\n", *lmin);
//    } else {
//        printf("Array is empty\n");
//    }
//    return 0;
//}
//
//// min - address of the pointer on minimal element in the array
//// function will return 0 if array is empty
//
//int array_min(int* array, int* limit, int** min) {
//    if (array >= limit) {
//        return 0;
//    }
//    *min = array; // it's the same as we say: "min = array[0]"
//    for (int* cur = array + 1; cur < limit; cur = cur + 1) {
//        if (*cur < **min) {
//            *min = cur;
//        }
//    }
//    return 1;
//}
