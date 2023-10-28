//
//  calloc functions.c
//  TheField
//
//  Created by Арсентий Халимовский on 28.10.2023.
//

// MARK: The realloc Function

//int main() {
//    int *ptr;
//    ptr = malloc(10 * sizeof(*ptr)); // a block of 10 ints
//
//    if (ptr != NULL) {
//        *(ptr + 2) = 50; // assign 50 to third int
//    }
//    ptr = realloc(ptr, 100 * sizeof(*ptr));
//    *(ptr + 30) = 75;
//    printf("%d %d", *(ptr+2), *(ptr+30)); // 100 ints
//
//    return 0;
//}

// MARK: The calloc Function

//typedef struct {
//    int num;
//    char *info;
//} record;
//
//int main() {
//    record *recs;
//    int num_recs = 2;
//    int k;
//    char str[] = "This is information";
//
//    recs = calloc(num_recs, sizeof(record));
//
//    if (recs != NULL) {
//        for (k = 0; k < num_recs; k++) {
//            (recs + k)->num = k;
//            (recs + k)->info = malloc(sizeof(str));
//            strcpy((recs + k)-> info, str);
//        }
//    }
//
//    for (k = 0; k < num_recs; k++) {
//        printf("%d\t%s\n", (recs+k)->num, (recs+k)->info);
//    }
//}
