//
//  Structs in functions and arrays.c
//  TheField
//
//  Created by Арсентий Халимовский on 21.10.2023.
//

//#include <stdio.h>
//#include <string.h>

/* Structs with Structs */

//typedef struct {
//    int x;
//    int y;
//} point;
//
//typedef struct {
//    float radius;
//    point center;
//} circle;
//
//int main() {
//    circle c = {4.5, {1, 3}};
//    printf("%3.1f %d,%d", c.radius, c.center.x, c.center.y);
//}

/* Pointers To Structs */

//int main() {
//    /* defines a pointer to the myStruct structure */
//    struct myStruct *struct_ptr;
//
//    /* stored the address of the structure vaiable struct_var in the pointer struct_ptr */
//    struct_ptr = &struct_var;
//
//    /* accesses the value of the structure member struct_mem */
//    struct_ptr -> struct_mem;
//
//}

//struct student {
//    char name[50];
//    int number;
//    int age;
//};
//
//void showStudentData(struct student *st);
//
//int main() {
//    struct student st1 = {"Krishna", 5, 21};
//    // Struct pointer as a function parameter
//    showStudentData(&st1);
//}
//
//void showStudentData(struct student *st) {
//    printf("\nStudent: \n");
//    printf("Name: %s\n", st->name);
//    printf("Number: %d\n", st->number);
//    printf("Age: %d\n", st->age);
//}

/* Structs as Function Parameters */

//typedef struct {
//    int id;
//    char title[40];
//    float hours;
//} course;
//
//void update_course(course *class);
//void display_course(course class);
//void change_course(course class);
//
//int main() {
//    course cs2;
//    course cs3 = {222, "Hello", 15.30};
//    update_course(&cs2);
//    display_course(cs2);
//    change_course(cs3);
//    return 0;
//}
//
//void update_course(course *class) {
//    strcpy(class->title, "C++ Fundamentals");
//    class->id = 111;
//    class->hours = 12.30;
//}
//
//void display_course(course class) {
//    printf("%d\t%s\t%3.2f\n", class.id, class.title, class.hours);
//}
//
//void change_course(course class) {
//    class.id = 999;
//    strcpy(class.title, "Yo");
//    class.hours = 20.1;
//    printf("%d\t%s\t%3.2f\n", class.id, class.title, class.hours);
//}

/* Array of Structures */

//typedef struct {
//    int h;
//    int w;
//    int l;
//} box;
//
//int main() {
//    box boxes[3] = {{2, 6, 8}, {4, 6, 6}, {2, 6, 9}};
//    int k;
//    int volume;
//
//    for (k = 0; k < 3; k++) {
//        volume = boxes[k].h * boxes[k].w * boxes[k].l;
//        printf("box %d volume %d\n", k, volume);
//    }
//    return 0;
//}
