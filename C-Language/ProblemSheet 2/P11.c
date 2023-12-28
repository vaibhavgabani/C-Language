#include<stdio.h>
int main(){
    int num,sum = 0,dum = 0,r = 0;
    printf("Enter value :");
    scanf("%d", &num);
    for(int i = 1 ; i <= num ; i++){
        int temp = i;
        dum = i;
        while(temp > 0){
            r = temp % 10;
            sum = sum + (r*r*r);
            temp = temp / 10;
        }
        if(sum == dum){
            printf("%d ",i);
        }
        dum = 0;
        sum = 0;
        r = 0;
    }
    return 0;
}