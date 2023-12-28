#include<stdio.h>
int main(){
    int num,div = 0;
    printf("Enter number : ");
    scanf("%d",&num);
    for(int i = 1 ; i <= 10 ; i++){
         div = num * i;
        printf("%d X %d = %d \n",num,i,div);
    }
    return 0;
}