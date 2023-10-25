//
//  MemoryManagement.c
//  TheField
//
//  Created by Арсентий Халимовский on 25.10.2023.
//

// MARK: Memory Management

#include <stdio.h>
#include <stdlib.h> // for memory management

int main() {
    int x;
    int arr[10];
    printf("%ld", sizeof(x)); // 4 bytes per element
    printf("%ld", sizeof(arr)); // 4 * 10 bytes gives us 40
    
    // malloc; // Returns a pointer to a contiguous block of memory that is of size bytes;
    
    // calloc(num_items, item_size)); // Returns a pointer to a contiguous block of memory that has num_items, each of size bytes. Typically used for array, structs and other derived data.
    
    // realloc(ptr, bytes) Resized the momery pointed to by ptr to size bytes. The newly allocated memory is not initialized.
    
    // free(ptr) Releases the block of memory pointed to by ptr;
}
