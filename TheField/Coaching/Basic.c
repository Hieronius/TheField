//
//  Basic.c
//  TheField
//
//  Created by Арсентий Халимовский on 07.12.2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// MARK: NOTES
/*
 int age; // обьявление // integer - целочисленное. Пример: 3, 15, 150
 float age1; // вещественное число или число с плавающей почкой. Пример: 3.13, 23.34, 150.323. float - плавающий.
 
 scanf("%d) - decimal integer для практических нужд
 scanf("%i) - просто integer, но для чиселс с нулем в начале не подходит.
 scanf("%i, 010) - вернет в результате не 10, а 8
 
 int значение имеет размер в 4 байта
 char значение имеет размер в 1 байт
 каждый байт состоит из 8 бит
 */

//int main() {
//    int age;
//    
//    // Спроси у пользователя его возраст
//    
//    scanf("%d", &age); //
//    
//    if (age <= 0) { // True = 1
//        printf("Не корректный возраст\n");
//        printf("%d\n", age);
//        
//    } else if (age >= 18) { // 2
//        printf("Это взрослый\n");
//        printf("%d\n", age);
//        
//    } else { // False = 0
//        printf("Это ребенок\n"); // 3
//        printf("%d\n", age);
//    }
//    return 0;
//}
