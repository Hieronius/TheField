//
//  TwoWaysToFillArrayWithFibonachi.c
//  TheField
//
//  Created by Арсентий Халимовский on 02.12.2023.
//

//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int getInt();
//void f(int* array, int size);
//void fa(int* array, int* limit);
//void f1(int* array, int size);
//void f2(int* array, int* limit);
//void array_fib(int* array, int* limit);
//
//int main() {
//    
//    int array[10] = {};
//    array_fib(array, array + 10);
//    
//    for (int i = 0; i < 10; i++) {
//        printf("\n %d", array[i]);
//    }
//    
//    return 0;
//}
//
//void array_fib(int* array, int* limit) {
//    int n1 = 1;
//    int n2 = 1;
//    int n3;
//    int i;
//    int size = limit - array;
//    
//    if (size < 1) {
//        printf("empty array");
//        return;
//    } else if (size == 1) {
//        printf("only one number in the array");
//        array[0] = 1;
//        return;
//    } else if ((size > 0) && (size < 2)) {
//        printf("only two numbers in the array");
//        array[0] = 1;
//        array[1] = 1;
//        return;
//    } else if (size >= 2) {
//        array[0] = 1;
//        array[1] = 1;
//        printf("\n%d %d", n1, n2);
//        
//        for (i = 2; i < size; i++) {
//            n3 = n1 + n2;
//            array[i] = n3;
//            printf(" %d", n3);
//            n1 = n2;
//            n2 = n3;
//        }
//        return;
//    } else {
//        printf("something wrong here");
//        return;
//    }
//}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//// MARK: First function for the task
//void f1(int* array, int size) {
//    int newArray[size];
//
//    int j = 0;
//    for (int i = size - 1; i >= 0; i = i - 1) {
//        newArray[j] = array[i];
//        j += 1;
//    }
//    
//    for (int i = 0; i < size; i++) {
//        array[i] = newArray[i];
//    }
//    
//}
//
//// MARK: Second function for the task
//void f2(int* array, int* limit) {
//    int size = limit - array;
//    f1(array, size);
//}
//
//// Use pointers and empty array to fill it with data
//void fa(int* array, int* limit) {
//    for (int* current = array; current < limit; current = current + 1) {
//        printf("%d", *current);
//    }
//}
//
//// Use empty array and sizeOf func to fill the array
//void f(int* array, int size) {
//    for (int i = 0; i < size; i = i + 1) {
//        printf("%d", array[i]);
//    }
//}
//
//int getInt() {
//    int temp;
//    scanf("%d", &temp);
//    return temp;
//}
