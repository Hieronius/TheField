//
//  ReturnPointerToArray.c
//  TheField
//
//  Created by Арсентий Халимовский on 14.10.2023.
//

//#include "ReturnPointerToArray.h"
//
//#include <stdio.h>
//
//int *test();
//
//int main() {
//    int *arr = test();
//    printf("%d adadwadw", *(arr+3));
//    /* there we got a result "1" because arr is equal to x[0] which we should add index 3 like x[0 + 3]
//     so as result we should return x[3] which is 1 */
//    return 0;
//}
//
//int *test() {
//    static int x[4]; /* {0, 1, 0, 1} */
//    for (int i = 0; i < 4; i++) {
//        x[i] = i % 2;
//    }
//    printf("%d it's a return value", *x);
//    /* because it's a pointer it will return a pointer on the first array element x[0] */
//    return x;
//}
