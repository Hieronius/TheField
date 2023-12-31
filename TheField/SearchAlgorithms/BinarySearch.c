//
//  BinarySearch.c
//  TheField
//
//  Created by Арсентий Халимовский on 18.12.2023.
//

#include <stdio.h>

// MARK: iterativeBinarySearch Standart

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

// MARK: IterativeBinarySearch ByPointers

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

// MARK: RecursiveBinarySearch Standart

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

// MARK: RecursiveBinarySearch ByPointers

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
