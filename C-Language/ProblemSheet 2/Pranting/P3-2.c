#include<stdio.h>
int main(){
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    //up
    int a = num * 2 - 1;
    for(int i = 1 ; i <= num ; i++){
        for(int q = 1 ; q < i;q++){
            printf("#");
        }
        for(int w = 1 ; w<= a ; w++){
            printf("*");
        }
        a = a - 2;
        printf("\n");
    }
    //down
    int b = 3;
    for(int i = 1 ; i < num ; i++){
        for(int q = 1 ; q < num - i ; q++){
            printf("#");
        }
        for(int w = 1 ; w <= b ; w++){
            printf("*");
        }
        b = b + 2;
        printf("\n");
    }
    return 0;
}