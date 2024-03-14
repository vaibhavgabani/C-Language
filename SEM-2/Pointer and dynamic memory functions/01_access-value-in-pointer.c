
#include<stdio.h>
int main(){
    int a = 5;
    int *p = &a; // pointer
    printf("A = %d\n",a); // %d is decimal intiger
    printf("A = %u\n",a); // %u is unsigned intiger
    printf("&a = %p\n",&a);
    printf("value which given by pointer : %d\n",*p);
    printf("&p = %d\n",&p);
    return 0;
}
