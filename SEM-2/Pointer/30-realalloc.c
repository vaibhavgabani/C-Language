#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    
    ptr = (int*) malloc(5 * sizeof(int));
    printf("ptr address is before %u \n",ptr);
    
    ptr = realloc(ptr,500 * sizeof(int));
    printf("ptr address is after %u \n",ptr);
    return 0;
}