#include <stdio.h>

// Function declarations
void inputarray(int arr[][n], int m, int n);
void printarray(int arr[][n], int m, int n);
void swaparray(int arr[][n], int m, int n);

// Global variables
int n; // Global variable for the number of columns

int main() {
    int m;

    // Taking input for the dimensions of the array
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    // Declaring the 2D array
    int arr[m][n];

    // Taking input for the elements of the array
    inputarray(arr, m, n);

    // Printing the elements of the array
    printarray(arr, m, n);

    // Reversing the array
    swaparray(arr, m, n);

    // Printing the reversed array
    printarray(arr, m, n);

    return 0;
}

// Function to take input for the elements of the array
void inputarray(int arr[][n], int m, int n) {
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter element at index (%d, %d): ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

// Function to print the elements of the array
void printarray(int arr[][n], int m, int n) {
    printf("\nThe entered array is:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

// Function to swap elements in the array to reverse it
void swaparray(int arr[][n], int m, int n) {
    int *start = &arr[0][0];
    int *end = &arr[m - 1][n - 1];
    int total_elements = m * n;
    int cnt = 0;

    while (cnt < total_elements / 2) {
        int temp = *end;
        *end = *start;
        *start = temp;
        start++;
        end--;
        cnt++;
    }
}
