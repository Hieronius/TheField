//
//  1.c
//  TheField
//
//  Created by Арсентий Халимовский on 26.11.2023.
//

//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//// Эта функция считывает одно число со входа
//// Пока нам не нужно знать, как она устроена
//
//int read_int();
//int discriminant(int a, int b, int c);
//int root_count(int a, int b, int c);
//
//int main() {
//    // Считайте три числа в локальные переменные (см. предыдущий шаг)
//    int a = read_int();
//    int b = read_int();
//    int c = read_int();
//    
//    printf("%d", root_count(a, b, c));
//
//    // выведите результат запуска root_count с аргументами a, b и c.
//
//    return 0;
//}
//
//int read_int() {
//    int x;
//    scanf("%d", &x);
//    return x;
//}
//
//int discriminant(int a, int b, int c) {
//    int D = b * b - 4 * a * c;
//    return D;
//}
//
//int root_count(int a, int b, int c) {
//   int D = discriminant(a, b, c);
//    if (D > 0) {
//        return 2;
//    } else if (D < 0) {
//        return 0;
//    } else {
//        return 1;
//    }
//}
