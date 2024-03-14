// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
int main() {
    // Write C code here
    int i = 0;
    int *ptr = (int*) malloc (3 * sizeof(int));
   
    printf("Enter 1 value : ");
    scanf("%d",ptr);
    printf("Enter 2 value : ");
    scanf("%d",ptr + 1);
    printf("Enter 2 value : ");
    scanf("%d",ptr + 2);
    
    printf("%d %d %d", *ptr , *ptr + 1 , *ptr + 2);
    free(ptr);
    return 0;
}
// In the second code snippet, you're using pointer arithmetic directly to access each element of the allocated memory block. You're correctly accessing ptr + i to read and print the values. Since you're not modifying the pointer itself, it continues to point to the beginning of the allocated memory block throughout the loop iterations, allowing you to properly read and print the values.
// In the second code snippet, ptr remains unchanged, and you use pointer arithmetic to access each element of the allocated memory block, resulting in correct printing.