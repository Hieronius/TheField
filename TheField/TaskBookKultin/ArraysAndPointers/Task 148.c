//
//  Task 148.c
//  TheField
//
//  Created by Арсентий Халимовский on 14.12.2023.
//

// MARK: Task 148

//#include <stdio.h>
//#include <stdlib.h>
//#define DAYSOFWEEK 7
//
//int main() {
//    int daysOfWeek[DAYSOFWEEK] = {0, 0, 0, 0, 0, 0, 0};
//    int sum = 0;
//    *daysOfWeek = 10;
//    
//    printf("Enter air temperature for the week\n");
//    
//    printf("Mondey -> ");
//    scanf("%d", daysOfWeek);
//    
//    printf("Tuesdays -> ");
//    scanf("%d", daysOfWeek + 1);
//    
//    printf("Wednesday -> ");
//    scanf("%d", daysOfWeek + 2);
//    
//    printf("Thuesday -> ");
//    scanf("%d", daysOfWeek + 3);
//    
//    printf("Friday -> ");
//    scanf("%d", daysOfWeek + 4);
//    
//    printf("Saturday -> ");
//    scanf("%d", daysOfWeek + 5);
//    
//    printf("Sunday -> ");
//    scanf("%d", daysOfWeek + 6);
//    
//    for (int i = 0; i < DAYSOFWEEK; i++) {
//        printf("%d\n", daysOfWeek[i]);
//        sum += *(daysOfWeek + i);
//    }
//    
//    printf("%d\n", sum);
//    
//    printf("Average temperature for the week: %0.2lf\n", (double)sum / (double)DAYSOFWEEK);
//}
