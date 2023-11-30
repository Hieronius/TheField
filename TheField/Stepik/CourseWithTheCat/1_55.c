//
//  1_55.c
//  TheField
//
//  Created by Арсентий Халимовский on 27.11.2023.
//

//#include <stdio.h>
//
//int divides(int a, int b);
//void print_newline();
//void divisors(int n);
//void all_divisors(int limit);
//
//int main() {
//
//    all_divisors(100);
//
//    return 0;
//}
//
///* Переводит вывод на новую строку.
//*/
//void print_newline() {
//    printf("\n");
//}
//
///* Возвращает 1 если a делится на b
//  (остаток от деления a на b -- ноль)
//   0 если не делится.
//*/
//int divides(int a, int b) {
//    return a % b == 0;
//}
//
///* Выводит одну строчку: число n, двоеточие и все его делители, большие единицы, до самого n включительно.
//Например, для числа 8 это:
//"8: 2 4 8 "
//В конце этой строчки должен быть пробел.
//*/
//void divisors(int n) {
//    printf("%d: ", n);
//    for (int i = 1; i <= n; i++) {
//        if (divides(n, i)) {
//            if (i > 1) {
//                printf("%d ", i);
//            }
//        }
//    }
//    // there should be print of the result
//}
//
///* Выводит делители для всех чисел от 1 до limit включительно
//Каждая строчка -- в формате, заданном функцией divisors.
//*/
//void all_divisors(int limit) {
//     for (int i = 1; i <= limit; i++) {
//         divisors(i);
//         print_newline();
//     }
//}
