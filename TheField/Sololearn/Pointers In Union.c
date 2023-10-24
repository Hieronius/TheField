//
//  Pointers In Union.c
//  TheField
//
//  Created by Арсентий Халимовский on 24.10.2023.
//

// MARK: Pointers to Unions

#include <stdio.h>

//union val {
//    int int_num;
//    float fl_num;
//    char str[20];
//};
//
//int main() {
//    union val info;
//    union val *ptr = NULL;
//    ptr = &info;
//    ptr->int_num = 10;
//    printf("info.int_num is %d\n", info.int_num);
//    printf("ptr.int_num is %ul\n", *ptr);
//    /* how to find a specific address of pointer to the Union */
//    printf("Address of info union in memory: %p\n", (void*)&info);
//    printf("Address of info union's pointer: %p\n", (void*)&ptr);
//
//}

// MARK: Unions as Function Parameters

//union id {
//    int id_num;
//    char name[20];
//};
//
//void set_id(union id*item);
//void show_id(union id item);
//
//int main() {
//    union id item;
//
//    set_id(&item);
//    show_id(item);
//}
//
//void set_id(union id *item) {
//    item->id_num = 42;
//}
//
//void show_id(union id item) {
//    printf("ID is %d", item.id_num);
//}

// MARK: Array of Unions

//union val {
//    int int_num;
//    float fl_num;
//    char str[20];
//};
//
//int main() {
//    union val nums[10];
//    int k;
//
//    for (k = 0; k < 10; k++) {
//        nums[k].int_num = k;
//    }
//
//    for (k = 0; k < 10; k++) {
//        printf("%d ", nums[k].int_num);
//    }
//}

//union type {
//    int i_val;
//    float f_val;
//    char ch_val;
//};
//
//int main() {
//    union type arr[3];
//    arr[0].i_val = 42;
//    arr[1].f_val = 3.14;
//    arr[2].ch_val = 'x';
//    printf("1st element is %d, 2nd is %f, and the 3rd is %c", arr[0].i_val, arr[1].f_val, arr[2].ch_val);
//}
