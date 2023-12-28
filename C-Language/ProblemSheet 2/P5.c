#include<stdio.h>
int main(){
    int num,dub,r = 0,sum = 0;
    printf("Enter number : ");
    scanf("%d",&num);
    dub = num;
    while(num > 0){
        r = num % 10;
        sum = sum +(r * r * r);
        num = num / 10;
    }
    if(sum == dub){
        printf("Amstrong");
    } else {
        printf("not amstrong");
    }
    return 0;
}