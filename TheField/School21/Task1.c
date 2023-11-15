//
//  Task1.c
//  TheField
//
//  Created by Арсентий Халимовский on 15.11.2023.
//

//
//  Task1.c
//  School21_Practice
//
//  Created by Voldemort Neda on 11/1/23.
//
//
//#include <stdio.h>
//#define ARSIZE 10
//
//int input(int *array);
//
//int sort(int *array);
//
//void output(int *array);
//
//int main() {
//    int array[ARSIZE];
//    if (input(array) == 1) {
//        printf("n\a");
//    } else {
//        sort(array);
//        output(array);
//    }
//
//    return 0;
//}
//
//int input(int *array) {
//    for (int i = 0; i < ARSIZE; i++) {
//        int num;
//        if ((scanf("%d", &num) == 1)) {
//            array[i] = num;
//        }
//    }
//    return 0;
//}
//
//// Sort with two pointers
//int sort(int *array) {
//    for (int i = 0; i < ARSIZE; i++) {
//        for (int j = 0; j < ARSIZE; j++) {
//            // this condition mean the same element
//            if (i == j) {
//                continue;
//            }
//
//            if (array[i] < array[j]) {
//                int copy = array[i];
//                array[i] = array[j];
//                array[j] = copy;
//            }
//        }
//    }
//    return *array;
//}
//
//void output(int *array) {
//    int i;
//    for (i = 0; i < ARSIZE; i++) {
//        printf("%d ", array[i]);
//    }
//}

