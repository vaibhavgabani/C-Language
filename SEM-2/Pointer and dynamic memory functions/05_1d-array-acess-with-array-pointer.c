
#include <stdio.h>

int main() {
    // Declare an array of integers
    int arr[3];

    // Declare an array of three pointers to integers
    int *ptr[3]; // Declares an array of three pointers to integers

    // Assign the address of each element of arr to the corresponding element of ptr
    for(int i = 0; i < 3; i++) {
        ptr[i] = &arr[i]; // Assign the address of arr[i] to ptr[i]
    }
    
    // Read integers from the user and store them in the memory locations pointed by ptr
    for(int i = 0; i < 3; i++) {
        printf("Enter value %d: ", i+1);
        scanf("%d", ptr[i]); // Read an integer and store it in the memory location pointed by ptr[i]
    }

    printf("\nEntered values:\n");
    // Print the addresses and values stored at those addresses
    for(int i = 0; i < 3; i++) {
        printf("Address: %p, Value: %d\n", (void*)ptr[i], *ptr[i]); // Print the address and value of ptr[i]
    }

    printf("Hello, world\n");

    return 0;
}
