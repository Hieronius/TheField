//
//  main.c
//  TheField
//
//  Created by Арсентий Халимовский on 07.10.2023.
//

#include <stdio.h>

int main() {
    int a[10];
    int k;
    
    for (k = 0; k < 10; k++) {
        a[k] = k * 10;
        printf("new a[k] number is %d \n", a[k]);
    }
    
    return 0;
}

