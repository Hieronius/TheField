//
//  1_71.c
//  TheField
//
//  Created by Арсентий Халимовский on 24.12.2023.
//

#include <stdio.h>
#include <stdlib.h>

//void factorize(int n, int *a, int *b);
//
//int main() {
//    int var1;
//    int var2;
//    
//    factorize(36, &var1, &var2);
//    
//    return 0;
//}
//
//void factorize(int n, int* a, int* b) {
//    *a = 1;
//    *b = n;
//
//    if (n <= 2) {
//        printf("a - %d\n", *a);
//        printf("b - %d\n", *b);
//        printf("We are here");
//        return;
//    }
//
//    for (int i = 2; i * i <= n; i++) {
//        if (n % i == 0) {
//            printf("a - %d\n", *a);
//            printf("b - %d\n", *b);
//            printf("No, here");
//            *a = i;
//            *b = n / i;
//            return;
//        } else if (n % i != 0) {
//            printf("a - %d\n", *a);
//            printf("b - %d\n", *b);
//            printf("Oh, come on\n");
//            return;
//        }
//    }
//}
