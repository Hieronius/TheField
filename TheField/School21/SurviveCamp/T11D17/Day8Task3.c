//
//  Day8Task3.c
//  TheField
//
//  Created by Арсентий Халимовский on 13.11.2023.
//

//
//  Day8Task3.c
//  School21_Practice
//
//  Created by Voldemort Neda on 10/31/23.
//

/*
#include <stdio.h>
#include <math.h>
#define NMAX 10


 Fill an array with data
int input(int *a, int *n);
 Print the elements of the array from input
void output(int *a, int n);
 Find the maximum value of the array
int max(int *a, int n);
 Find the minimum value of the array
int min(int *a, int n);
 Find first part of dispersion
double mean(int *a, int n);
 Find second part of dispersion
double variance(int *a, int n);
 Print set of result of min, max, mean and variance
void output_result(int max_v, int min_v, double mean_v, double variance_v);

int main() {
     input the size of an array and
  int n, data[NMAX];
     if input data is correct let's make some calculation
    if (input(data, &n) == 0) {
         print the content of the array
        output(data, n);
         and print max, min, mean and variance of the dispersion
        output_result(max(data, n), min(data, n), mean(data, n), variance(data, n));
         or pring error if program has been failed
      } else {
          printf("n/a");
      }
  return 0;
}

int input(int *a, int *n) {
     implement a special key to check input for valid data;
    char tempOne;
     get input data
    int input = scanf("%d%c", n, &tempOne);
     check for correct array size
    if (*n <= 0 || *n > NMAX) {
         if size is wrong let's exit the program
        return 1;
    }
     if amout of arguments is exactly two and there is no "enter" being pressed do the work:
    if (input == 2 && tempOne == '\n') {
         iterate an array and fill it with input data
        for (int *p = a; p - a < *n; p++) {
            int num = scanf("%d", p);
             Also check for amount of arguments. If there is not a single one per enter - exit the program
            if (num != 1) {
                return 1;
            }
        }
    }
     After you write all numbers to fill the array let's check for "enter" being pressed and also of the "EOF - End Of The File"
     If one of this checks will fail let's exit the program
    int tempTwo = getchar();
    if (tempTwo != '\n' && tempTwo != EOF) {
        return 1;
    }
     else fill the array and successfuly end the function.
    return 0;
}
 get our array and it's size, iterate until the internal array index will reach it's bound and print each element
void output(int *a, int n) {
    for (int *p = a; p - a < n; p++) {
        printf("%d ", *p);
        if (p - a < n - 1) {
            printf(" ");
        }
    }
}
 iterate the whole array and compare each element with the first one
 replace and continue if the new one is bigger
int max(int *a, int n) {
    int max_number = a[0];
    for (int *p = a; p - a < n; p++) {
        if (*p > max_number) {
            max_number = *p;
        }
    }
    return max_number;
}
 iterate the whole array and comare each element with the first one
 replace and continue if the next one is smaller than the first one
int min(int *a, int n) {
    int min_number = a[0];
    for (int *p = a; p - a < n; p++) {
        if (*p < min_number) {
            min_number = *p;
        }
    }
    return min_number;
}
 use the func to calculate mean value of dispersion (min + max / 2.0)
double mean(int *a, int n) {
   return (max(a, n) + min(a, n)) / 2.0;
}
 use the func to calculate variance of the dispersion ((max - min + 1)^) -1) / 12.0
double variance(int *a, int n) {
    return (pow((max(a, n) - min(a, n) + 1),2) - 1 ) / 12.0;
}
 pass the result of all other calculations and print it
void output_result(int max_v, int min_v, double mean_v, double variance_v) {
    printf("\n%d %d %lf %lf", max_v, min_v, mean_v, variance_v);
}
*/
