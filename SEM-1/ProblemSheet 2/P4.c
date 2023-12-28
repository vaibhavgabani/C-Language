#include<stdio.h>
int main(){
    int num,tot = 0;
    printf("Enter number : ");
    scanf("%d",&num);
    for(int i = 1 ; i <= num ; i++){
        if(num % i == 0){
            printf("%d ",i);
        }
    }
    return 0;
}