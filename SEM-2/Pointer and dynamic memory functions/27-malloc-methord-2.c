// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
int main() {
    // Write C code here
    int i = 0;
    int *ptr = (int*) malloc (3 * sizeof(int));
    
    for(int i = 0 ; i < 3 ; i++){
        printf("%d : ",i);
        scanf("%d",&*(ptr));
        ptr++;
    }
    for(int i = 0 ; i < 3 ; i++){
        printf("%d ",*(ptr));
        ptr++;
    }
    free(ptr);
    return 0;
}
// In the first code snippet, you're incrementing the pointer ptr inside the loop using ptr++. This means that after the loop finishes, ptr points to the memory location one past the end of the allocated block. Then, when you try to print the values in the second loop, you're printing the value at that location, which is uninitialized memory. That's why you're getting unexpected results.
// code snippet, ptr moves forward with each iteration of the loop due to ptr++, leading to incorrect printing in the second loop.