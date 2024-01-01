//
//  guessTheNumberGame.c
//  TheField
//
//  Created by Арсентий Халимовский on 12.12.2023.
//

//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main() {
//    const int MIN = 1;
//    const int MAX = 100;
//    int guess;
//    int guesses = 0;
//    int answer;
//
//    //uses the current time as seed
//    srand(time(0));
//
//    // Seems like it's sais "add Max to the max valued and Min to the min valued of rand function result
//    answer = (rand() % MAX) + MIN;
//
//    do {
//        printf("Enter a guess: ");
//        scanf("%d", &guess);
//
//        if (guess > answer) {
//            printf("Too high\n");
//        } else if (guess < answer) {
//            printf("Too low\n");
//        } else {
//            printf("CORRECT\n");
//        }
//        guesses += 1;
//
//    } while (guess != answer);
//
//    printf("************************\n");
//    printf("answer: %d\n", answer);
//    printf("guesses: %d\n", guesses);
//    printf("************************\n");
//
//    return 0;
//}
