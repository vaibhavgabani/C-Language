#include<stdio.h>
int main(){
    int num ;int cnt = 0;
    printf("Enter Number :");
    scanf("%d",&num);
    for(int i = 1 ; i <= num ; i++){
        if(num % i == 0){
            cnt++;
        }
    }
    if(cnt == 2){
        printf("Enter number is prime.\n");
    } else {
        printf("Enter number is not prime.\n");
    }
    return 0;
}