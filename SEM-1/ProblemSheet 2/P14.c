#include<stdio.h>
int main(){
    int num,r = 0 , tot = 0;
    printf("Enter number :");
    scanf("%d",&num);
    while(num > 0){
        r = num % 10;
        if(r % 2 != 0){
            tot = tot + r;
        }
        num = num /10;
    }
    printf("%d",tot);
    return 0;
}