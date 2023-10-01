#include<stdio.h>
int main(){
    int n1,n2,cnt = 0;
    char choice;
        printf("Enter First Number : ");
        scanf("%d",&n1);
        printf("Enter Second Number : ");
        scanf("%d",&n2);
        if(n1<n2){
            printf("Enter valid number ");
        } else {
            while(n1 > 0){
            cnt++;
            n1 = n1 - n2;
        }
        printf("div is : %d",cnt);
        }
    return 0;
}