#include<stdio.h>

int main() {
    int arr[3][3] = {
            {1,2,3},
            {4,5,6},
            {7,8,9}
    };
    int *p;
    p = &arr[0][0];

    // Input using pointer p
    printf("Enter elements of the 3x3 array:\n");
    for(int i = 0 ; i < 3 ; i++) {
        for(int j = 0 ; j < 3 ; j++) {
            scanf("%d", p + (i * 3) + j);
        }
    }

    // Printing the array
    printf("\nThe array elements:\n");
    for(int i = 0 ; i < 3 ; i++) {
        for(int j = 0 ; j < 3 ; j++) {
            printf("arr[%d][%d] address = %p value = %d \n", i, j, (void *)&arr[i][j], arr[i][j]);
        }
    }
    return 0;
}
