#include<stdio.h>
int main(){
    int n,r,sum;
    sum = 0;
    printf("Enter Number : ");
    scanf("%d",&n);

    while(n>0){
        r = n % 10;
        if(r % 2 != 0){
            sum = sum + r;
        }
        n = n / 10;
    }
    printf("%d",sum);
    return 0;
}