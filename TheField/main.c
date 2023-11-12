//
//  main.c
//  TheField
//
//  Created by Арсентий Халимовский on 07.10.2023.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i;
    int n;
    // Function generating random data
    for (i = 0; i < n; i++){
        float random = ((float)rand() / (float)(RAND_MAX));
        float_arr[i] = random;
        printf("%f  ", random);
    }
    //Dividing float data into bins
    for (i = 0; i < n; i++){
        for (j = 1; j <= bins; j++){

            float bin_max = (float)j / (float)bins;
            if (float_arr[i] <= bin_max){
                hist[j]++;
                break;
            }
        }
    }
    // Plotting histogram
    printf("\n\nHistogram of Float data\n");
    for (i = 1; i <= bins; i++)
    {
        count = hist[i];
        printf("0.%d |", i - 1);
        for (j = 0; j < count; j++)
        {
            printf("%c", (char)254u);
        }
        printf("\n");
    }
}
