//
//  Task 157.c
//  TheField
//
//  Created by Арсентий Халимовский on 19.12.2023.
//

// MARK: TASK 157

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#define SIZE 10

//int main() {
//    int array[SIZE];
//    int counter = 0;
//    int input = -1;
//    int totalHeight = 0;
//    int total = 0;
//    float averageHeight;
//    
//    printf("*** Analysis of the students height ***\n");
//    printf("Enter the height (sm) and press <Enter>");
//    printf("To end enter 0 and press <Enter>\n");
//    
//    while (input != 0) {
//        printf("%d - iteration started -> ", counter + 1);
//        int input;
//        scanf("%d", &input);
//        if (input == 0) {
//            break;
//        }
//        *(array + counter) = input;
//        counter += 1;
//    }
//    
//    printf("Display the content of the array\n");
//    
//    for (int i = 0; i < counter; i++) {
//        printf("%d\n", *(array + i));
//        totalHeight += *(array + i);
//    }
//    
//    averageHeight = (double)totalHeight / counter;
//    
//    printf("Average height of the students is %.1lf\n", averageHeight);
//    
//    for (int i = 0; i < counter; i++) {
//        if (*(array + i) > averageHeight) {
//            total += 1;
//        }
//    }
//    
//    printf("%d amount of students who has higher height than average", total);
//    
//    
//    return 0;
//}
