//
//  Task 147.c
//  TheField
//
//  Created by Арсентий Халимовский on 14.12.2023.
//

// MARK: TASK № 147

//#include <stdio.h>
//#include <stdlib.h>
//#define SIZE 10
//
//int main() {
//    int array[SIZE];
//    int sum = 0;
//    int minNumber = 0;
//    int maxNumber = 0;
//
//    printf("Enter 10 elements of array in one line and press <Enter>\n");
//    
//    // 1. Fill array with numbers
//    for (int i = 0; i < SIZE; i++) {
//        scanf("%d", (array + i));
//    }
//    // 2. Find sum of all array's elements
//    for (int i = 0; i < SIZE; i++) {
//        sum += *(array + i);
//    }
//    
//    // 3. Find min element of an array
//    
//    for (int i = 0; i < SIZE; i++) {
//        if (*array > *(array + i)) {
//            int temp = *array;
//            *array = *(array + i);
//            *(array + i) = temp;
//        }
//    }
//    minNumber = *array;
//    
//    // 4. Find max element of an array
//    
//    for (int i = 0; i < SIZE; i++) {
//        if (*array < *(array +i)) {
//            int temp = *array;
//            *array = *(array + i);
//            *(array + i) = temp;
//        }
//    }
//    maxNumber = *array;
//    
//    sum -= (minNumber + maxNumber);
//    
//    printf("Minimum number: %d\n", minNumber);
//    printf("Maximum number: %d\n", maxNumber);
//    printf("Averege non-zero value: %.2lf\n", (double)sum / (double)(SIZE - 2));
//
//    return 0;
//}
