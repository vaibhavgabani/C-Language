#include<stdio.h>
int main(){
    int Number,r,c,arm,N;
    
    arm = 0;
    
    printf("Enter Number : ");
    scanf("%d",&Number);
    N = Number;
    
    while(Number > 0){
        r = Number % 10;
        arm = (r*r*r) + arm;
        Number = Number/10;
    }
    
    if(arm == N){
        printf("Amstrong");
    } else {
        printf("not Amstrong");
    }
    return 0;
}