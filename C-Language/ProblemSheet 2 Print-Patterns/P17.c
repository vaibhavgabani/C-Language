#include<stdio.h>
int main(){
    int num;
    printf("Enter number :");
    scanf("%d",&num);
    num = num + 1;
    int a = 1;
    for(int x = 1 ;x < num*2 ; x++){
        printf("*");
    }
    printf("\n");
    for(int i = 1 ; i <= num ; i++){
        for(int q = 1 ; q <= num - i ; q++){
            printf("*");
        }
        for(int w = 1 ; w <= a ; w++){
            printf(" ");
        }
        a = a + 2;
        for(int r = 1 ; r <= num - i ; r++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}