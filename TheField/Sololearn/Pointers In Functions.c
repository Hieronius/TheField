//
//  Pointers In Functions.c
//  TheField
//
//  Created by Арсентий Халимовский on 19.10.2023.
//

//#include <stdio.h>
//#include <stdlib.h>

/* The Void Pointer*/

//int main() {
//    int x = 33;
//    float y = 12.4;
//    char c = 'a';
//    void *ptr;
//
//    ptr = &x;
//    printf("void ptr points to %d\n", *((int *)ptr));
//    ptr = &y;
//    printf("void ptr points to %f\n", *((float *)ptr));
//    ptr = &c;
//    printf("void ptr points to %c\n", *((char *)ptr));
//
//    return 0;
//}

/* Functions Using void Pointers */

//int main() {
//
//    /* void *square(const void*); */
//
//    void* square(const void* num);
//
//    int x;
//    int sq_int;
//    x = 6;
//    sq_int = square(&x);
//    printf("%d squared is %d\n", x, sq_int);
//
//    return 0;
//}
//
//void* square(const void* num) {
//    int result;
//    result = (*(int *)num) * (*(int *)num);
//    return result;
//}

/* Function Pointers as Arguments */

/* void qsort(void *base, size_t num, size_t width,
    int (*compare)(const void*, const void *)) */

//int compare(const void*, const void*);
//
//int main() {
//    int arr[5] = {52, 23, 56, 19, 4};
//    int num, width, i;
//
//    num = sizeof(arr)/sizeof(arr[0]);
//    width = sizeof(arr[0]);
//    qsort((void *)arr, num, width, compare);
//    for (i = 0; i < 5; i++) {
//        printf("%d ", arr [i]);
//    }
//
//    return 0;
//}
//
//int compare (const void* elem1, const void *elem2) {
//    if ((*(int *)elem1) == (*(int *) elem2)) {
//        return 0;
//    } else if ((*(int *)elem1) < (*(int *)elem2)) {
//        return -1;
//    } else {
//        return 1;
//    }
//}
