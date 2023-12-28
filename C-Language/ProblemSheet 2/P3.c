#include<stdio.h>
int main(){
    int n1,n2,cnt = 0;
    //input
    printf("Enter First nimber : ");
    scanf("%d",&n1);
    printf("Enter Second nimber : ");
    scanf("%d",&n2);
    //pricess
    while(n1>0){
        n1 = n1 - n2;
        cnt++;
    }
    if(cnt % 2 == 0){
        printf("%d",cnt);
    } else {
        printf("%d",cnt-1);
    }
    
    return 0;
}