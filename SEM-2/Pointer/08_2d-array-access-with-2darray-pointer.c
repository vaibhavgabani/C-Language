#include<stdio.h>

int main() {
    // Declare a 2D array and an array of pointers to integers
    int arr[3][3];
    int *ptr[3][3];

    // Assign the address of each element of arr to the corresponding element of ptr
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            ptr[i][j] = &arr[i][j];
        }
    }

    // Input values for each element
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Enter value at [%d][%d]: ", i+1, j+1);
            scanf("%d", &*ptr[i][j]);
        }
    }

    // Print values with their addresses
    printf("\nValues with addresses:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Address: %u, Value: %d\n", ptr[i][j], *ptr[i][j]);
        }
    }

    // Print values in matrix form
    printf("\nPrint in matrix form:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf(" %d", *ptr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
