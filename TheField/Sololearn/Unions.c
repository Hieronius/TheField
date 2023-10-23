//
//  Unions.c
//  TheField
//
//  Created by Арсентий Халимовский on 23.10.2023.
//

// MARK: Unions

#include <stdio.h>
#include <string.h>

//union val {
//    int int_num;
//    float fl_num;
//    char str[20];
//};
//
//int main() {
//    union val test;
//
//    test.int_num = 123;
//    test.fl_num = 98.76;
//    strcpy(test.str, "hello");
//
//    printf("%d\n", test.int_num);
//    printf("%f\n", test.fl_num);
//    printf("%s\n", test.str);
//
//    printf("%lu\n", sizeof(test.int_num));
//    printf("%lu\n", sizeof(test.fl_num));
//    printf("%lu\n", sizeof(test.str));
//}

// MARK: Structures With Unions

//typedef struct {
//    char make[20];
//    int model_year;
//    int id_type; /* 0 for id_num, 1 for VIN */
//    union {
//        int id_num;
//        char VIN[20];
//    } id;
//} vehicle;
//
//int main() {
//    vehicle car1;
//    strcpy(car1.make, "Ford");
//    car1.model_year = 2017;
//    car1.id_type = 0;
//    strcpy(car1.id.VIN, "Wrong car");
//    car1.id.id_num = 123098;
//    
//    /* display vehicle data */
//    printf("Make: %s\n", car1.make);
//    printf("Model Year: %d\n", car1.model_year);
//    
//    if (car1.id_type == 0) {
//        printf("ID: %d\n", car1.id.id_num);
//    } else {
//        printf("ID: %s\n", car1.id.VIN);
//    }
//}
