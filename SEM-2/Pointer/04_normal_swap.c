#include<stdio.h>
void swap(int *,int *);

int main(){
    int a = 10;
    int b = 7;
    swap(&a,&b);
    printf("a = %d , b = %d\n",a,b);
    return 0;
}
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


