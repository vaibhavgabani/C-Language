// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
int main() {
    // Write C code here
    int n;
    printf("Enter size of array :");
    scanf("%d",&n);
    int *ptr = (int*) calloc (n , sizeof(int));
    
    for(int i = 0 ; i < n ; i++){
        printf("%d : ",i);
        scanf("%d",&*(ptr+i));
    }
    for(int i = 0 ; i < n ; i++){
        printf("%d ",*(ptr+i));
    }
    free(ptr);
    return 0;
}
// In the second code snippet, you're using pointer arithmetic directly to access each element of the allocated memory block. 
// You're correctly accessing ptr + i to read and print the values. 
// Since you're not modifying the pointer itself, it continues to point to the beginning of the allocated memory block throughout the loop iterations, allowing you to properly read and print the values.
// In the second code snippet, ptr remains unchanged, and you use pointer arithmetic to access each element of the allocated memory block, resulting in correct printing.