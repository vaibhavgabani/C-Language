#include<stdio.h>
int main(){
    int n,r,arm,N;
    printf("Enter Number :");
    scanf("%d",&n);
    N = n;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= i ; j++){
              r = n % 10;
              arm = (r*r*r)+r;
            n = n / 10;
        }
        if(N==arm){
            printf("%d",i);
        }
    }
    return 0;
}