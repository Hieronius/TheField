//
//  PassingAnArrayToFunction.c
//  TheField
//
//  Created by Арсентий Халимовский on 13.10.2023.
//

//#include "PassingAnArrayToFunction.h"
//
//int * get_events();
//
//int main() {
//    int *a;
//    int k;
//    
//    a = get_events(); /* get first 5 even numbers */
//    for (k = 0; k < 5; k++) {
//        printf("%d \n", a[k]);
//    }
//    
//    return 0;
//}
//
//int * get_events() {
//    static int nums[5];
//    int k;
//    int even = 0;
//    
//    for (k = 0; k < 5; k++) {
//        nums[k] = even += 2;
//    }
//    
//    return (nums);
//}

//int add_up (int *a, int num_elements);
//
//int main() {
//    int orders[5] = {100, 220, 37, 16, 98};
//
//    printf("Total orders is %d \n", add_up(orders, 5));
//
//    return 0;
//}
//
//int add_up (int *a, int num_elements) {
//    int total = 0;
//    int k;
//
//    for (k = 0; k < num_elements; k++) {
//        total += a[k];
//    }
//    return (total);
//}
