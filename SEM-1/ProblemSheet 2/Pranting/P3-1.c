#include<stdio.h>
int main(){
    int num;
    printf("Enter your number :");
    scanf("%d",&num);
    //upside
    int a = 1;
    for(int i = 1 ; i <= num * 2 - 1 ; i++){
        printf("*");
    }
    printf("\n");
    for(int i = 1 ; i < num ; i++){
        for(int q = 1 ; q <= num - i ; q++){
            printf("*");
        }
        for(int w = 1 ; w <= a ; w++){
            printf("#");
        }
        a = a + 2;
        for(int e = 1 ; e <= num - i ; e++){
            printf("*");
        }
        printf("\n");
    }
    //down
    int b = num*2-3;
    for(int i = 2  ; i < num ; i++){
        for(int q = 1 ; q <= i ; q++){
            printf("*");
        }
        for(int w = 2 ; w < b ; w++){
            printf("#");
        }
        b = b - 2;
        for(int e = 1 ; e <= i ; e++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = 1 ; i <= num *2 -1 ; i++){
        printf("*");
    }
    return 0;
}