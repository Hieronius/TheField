//
//  Task 156.c
//  TheField
//
//  Created by Арсентий Халимовский on 18.12.2023.
//

// MARK: TASK 156

// 1. Input an array of integers without any order
// 2. Sort this array with bubble sort by ascending order
// 3. Implement binary search

// 1 3 5 7 9 2 4 6 8 10
// 1 2 3 4 5 6 7 8 9 10

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#define SIZE 10

//void bubbleSortByPointers(int *num, int size);
//
//int iterativeBinarySearch(int arr[], int left, int right, int target);
//int iterativeBinarySearchByPointers(int *arr, int left, int right, int target);
//
//int recursiveBinarySearch(int arr[], int left, int right, int target);
//int recursiveBinarySearchByPointers(int *arr, int left, int right, int target);
//
//int binarySearchExample(int arr[], int l, int r, int x);
//
//int main() {
//    int arr[SIZE];
//
//    // 1. Take an array
//    printf("Enter an array of integers\n");
//    for (int i = 0; i < SIZE; i++) {
//        scanf("%d", arr + i);
//    }
//
//    // 2. Sort an array
//    bubbleSortByPointers(arr, SIZE);
//    for (int i = 0; i < SIZE; i++) {
//        printf("%d", *(arr + i));
//    }
//
//    printf("\n");
//
//    // 3. Use binary search
//    // iterativeBinarySearch(arr, 0, SIZE - 1, 5);
////     iterativeBinarySearchByPointers(arr, 0, SIZE - 1, 10);
////     recursiveBinarySearch(arr, 0, SIZE - 1, 10);
//     recursiveBinarySearch(arr, 0, SIZE - 1, 10);
//    
//    return 0;
//}
//
//void bubbleSortByPointers(int *num, int size) {
//    for (int i = 0; i < size - 1; i++) {
//        for (int j = (size - 1); j > i; j--) {
//            if (*(num + j - 1) > *(num + j)) { // if current element is smaller than the previous one
//                int temp = *(num + j - 1); // let's replace one with the other one
//                *(num + j - 1) = *(num + j);
//                *(num + j) = temp;
//            }
//        }
//    }
//}
//
//int iterativeBinarySearch(int arr[], int left, int right, int target) {
//    // Until condition will be false keep searching
//    while (left <= right) {
//        int mid = left + (right - left) / 2;
//
//        // Check if "x" is presented at the middle and return it's index if it's true
//        if (arr[mid] == target) {
//            printf("%d has been found at the %d index\n", target, mid);
//            return mid;
//        }
//
//        // if "x" greater, ignore left half
//        if (arr[mid] < target) {
//            left = mid + 1;
//        }
//
//        // if "x" is smaller, ignore right half
//        else {
//            right = mid - 1;
//        }
//    }
//
//    // if we reach here, then element wasn't present
//    printf("Unfortunately %d wasn't presented\n", target);
//    return -1;
//
//}
//
//int iterativeBinarySearchByPointers(int *arr, int left, int right, int target) {
//    // Until condition will be false keep searching
//    while (left <= right) {
//        int mid = left + (right - left) / 2;
//        
//        // Check if "x" is presented at the middle
//        if (*(arr + mid) == target) {
//            printf("%d has been found at the %d index\n", target, mid);
//            return mid;
//        }
//        
//        // if "x" greater, ignore left half
//        if (*(arr + mid) < target) {
//            left = mid + 1;
//        }
//        
//        // if "x" is smaller, ignore right half
//        else {
//            right = mid - 1;
//        }
//    }
//    printf("Unfortunately %d wasn't presented\n", target);
//    return -1;
//}
//
//
//int recursiveBinarySearch(int arr[], int left, int right, int target) {
//    if (right >= left) {
//        int mid = left + (right - left) / 2;
//
//        // If the element is present at the middle return int's index
//        if (arr[mid] == target) {
//            printf("%d has been found at the %d index\n", target, mid);
//            return mid;
//        }
//
//        // If the elements is smaller than mid,
//        // then it can only be present in the left subarray
//        if (arr[mid] > target) {
//            printf("We move to the left side of the array with a value of middle - %d\n", mid);
//            return recursiveBinarySearch(arr, left, mid - 1, target);
//        }
//
//        // Else the element can only be present in the right subarray
//        printf("We move to the right side of the array with a value of middle - %d\n", mid);
//        return recursiveBinarySearch(arr, mid + 1, right, target);
//    }
//
//    // We reach here when element is not presented in array
//    printf("Unfortunately %d wasn't presented\n", target);
//    return -1;
//}
//
//int recursiveBinarySearchByPointers(int *arr, int left, int right, int target) {
//    if (left >= right) {
//        int mid = left + (right - left) / 2;
//        
//        // If the element is present at the middle return int's index
//        if (*(arr + mid) == target) {
//            printf("%d has been found at the %d index\n", target, mid);
//            return mid;
//        }
//
//        // If the elements is smaller than mid,
//        // then it can only be present in the left subarray
//        if (*(arr + mid) > target) {
//            printf("We move to the left side of the array with a value of middle - %d\n", mid);
//            return recursiveBinarySearch(arr, left, mid - 1, target);
//        }
//
//        // Else the element can only be present in the right subarray
//        printf("We move to the right side of the array with a value of middle - %d\n", mid);
//        return recursiveBinarySearch(arr, mid + 1, right, target);
//    }
//    
//    // We reach here when element is not presented in array
//    printf("Unfortunately %d wasn't presented\n", target);
//    return -1;
//}
