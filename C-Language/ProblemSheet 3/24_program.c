// 24) Write a C Program to merge two array in third array and sort it.
// Enter size of first array: 3
// Enter size of second array: 3
// Enter [1] value: 1
// Enter [2] value: 2
// Enter [3] value: 3
// Enter [1] value: 4
// Enter [2] value: 5
// Enter [3] value: 6
// the merged array : 
// 1 2 3 4 5 6
#include <stdio.h>
int main() {
    int n1, n2;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr1[n1], arr2[n2], arr3[200];

    // Input of the first array
    for (int i = 0; i < n1; i++) {
        printf("Enter [%d] value: ", i + 1);
        scanf("%d", &arr1[i]);
    }
    // Input of the second array
    for (int i = 0; i < n2; i++) {
        printf("Enter [%d] value: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    int i = 0; // Declare i outside the loop
    for (i = 0; i < n1; i++) {  
        arr3[i] = arr1[i];
    }
    for (int j = 0; j < n2; j++) {
        arr3[i] = arr2[j];
        i++;
    }
    // Print the merged array
    printf("the merged array : \n");
    for (int k = 0; k < (n1 + n2); k++) {
        printf("%d ", arr3[k]);
    }

    return 0;
}
