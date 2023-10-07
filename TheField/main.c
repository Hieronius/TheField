//
//  main.c
//  TheField
//
//  Created by Арсентий Халимовский on 07.10.2023.
//

#include <stdio.h>

int sum_up(int a, int b);

int main(int argc, const char * argv[]) {
    int a = 5;
    int b = 10;
    // insert code here...
    printf("Hello, World!\n");
    printf("%d \n", sum_up(a, b));
    return 0;
}

int sum_up(int a, int b) {
    a += b;
    return a;
}
