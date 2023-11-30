#include <stdio.h>

int main() {
    int num1, num2, num3;

    // input
    printf("Enter size of first array: ");
    scanf("%d", &num1);
    printf("Enter size of second array: ");
    scanf("%d", &num2);
    num3 = num1 + num2;
    int arr1[num1], arr2[num2], arr3[num3];

    printf("Enter values for first array: \n");
    for (int i = 0; i < num1; i++) {
        printf("Enter value for [%d] position: ", i + 1);
        scanf("%d", &arr1[i]);
    }
    printf("Enter values for second array: \n");
    for (int i = 0; i < num2; i++) {
        printf("Enter value for [%d] position: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    // process

    // transfer from 1st array to 3rd array
    int i;
    for (i = 0; i < num1; i++) {
        arr3[i] = arr1[i];
    }
    // transfer from 2nd array to 3rd array
    for (int j = 0; j < num2; j++) {
        arr3[i] = arr2[j];
        i++;
    }
    // output process
    printf("Merged array: ");
    for (int i = 0; i < num3; i++) {
        printf("%d\t", arr3[i]);
    }

    return 0;
}
