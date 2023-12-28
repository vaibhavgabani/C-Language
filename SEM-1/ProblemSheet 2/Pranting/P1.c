#include<stdio.h>
int main(){
    int num;
    printf("Enter number : ");
    scanf("%d",&num);
    int a = num * 2 - 3;
    for(int i = 1 ; i <= num-1 ; i++){
       for(int q = 1 ; q <= i ; q++){
        printf("* ");
       }
       for(int w = 1 ; w <= a ; w++){
        printf("  ");
       }
       a = a - 2;
       for(int e = 1 ; e <= i ; e++){
        printf("* ");
       }
        printf("\n");
    }
    for(int q = 1 ; q <= num*2-1 ; q++){
        printf("* ");
    }
    return 0;
}