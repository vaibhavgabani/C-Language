#include<stdio.h>
int main(){
    int n = 5;
    // printf("Enter Number");
    // scanf("%d",&n);
   for(int i = 1 ; i <= n ; i++){
    for(int j = 1 ; j <= i ; j++){
        printf("* ");
    }
    int s = (2*n)-(2*i);
    for(int b = 1 ; b <= s ; b++){
        printf("  ");
    }
    for(int j = 1 ; j <= i ; j++){
        printf("* ");
    }
    printf("\n");
   }
    return 0;
}