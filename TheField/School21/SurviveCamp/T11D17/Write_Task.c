//
//  Write_Task.c
//  TheField
//
//  Created by Арсентий Халимовский on 16.11.2023.
//

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main() {
//    int input = 0;
//    char storage[100];
//    char path[100];
//    // 1. Get first type of the command
//    while (input != -1) {
//        if (scanf("%d", &input) != 1) {
//           //  printf("n/a");
//        } else  // end of the program
//            if (input == -1) {
//                break;
//                // Read the file command
//            } else if (input == 1) {
//                scanf("%99s", path);
//                FILE *in_file = fopen(path, "r");  // read only
//                if (in_file == NULL) {
//                    printf("n/a\n");
//                } else {
//                    fgets(storage, 100, in_file);
//
//                    printf("%s\n", storage);
//                    
//                }
//                fclose(in_file);
//                
//            } else if (input == 2) {
//                char line[100];
//                fgets(line, 100, stdin);
//                
//                FILE *in_file = fopen(path, "r");  // read only
//                if (in_file == NULL) {
//                    printf("n/a\n");
//                } else {
//                    fclose(in_file);
//                    // FILE *in_text = fopen(storage, "a");
//                    in_file = fopen(path, "a");
//                    
//                    fprintf(in_file, "%s", line);
//                    
//                    fclose(in_file);
//                    
//                    in_file = fopen(path, "r");  // read only
//                    
//                    fgets(storage, 100, in_file);
//                    
//                    printf("%s\n", storage);
//                    
//                    fclose(in_file);
//                }
//                
//            } else {
//                printf("n/a\n");
//            }
//    }
//    return 0;
//}
