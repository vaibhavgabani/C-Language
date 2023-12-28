#include<stdio.h>
int main(){
    int num, a = 0 , b = 1,temp;
    printf("Enter number :");
    scanf("%d",&num);
    for(int i = 3 ; i <= num ; i++){
        printf("%d ",a);
        temp = a + b;
        a = b;
        b = temp;   
    }
    return 0;
}