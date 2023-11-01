#include<stdio.h>
int main(){
    float n1,n2,cnt = 0;       
        printf("\n Enter First Number : ");
        scanf("%f",&n1);
        printf("Enter Second Number : ");
        scanf("%f",&n2);
        if(n1<n2){
            printf("Enter valid number ");
        } else {
            while(n1 > 0){
            cnt++;
            n1 = n1 - n2;
        }
        printf("div is :%f",cnt);
        if(cnt % 2 == 0){
            printf("div is :%f",cnt);
        } else  {
            int aq = cnt - 2;
            printf("div is :%f",aq);
        
    return 0;
        }
}