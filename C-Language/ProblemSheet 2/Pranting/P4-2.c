#include<stdio.h>
int main(){
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    //up
    for(int i = 1 ; i < num ; i++){
        for(int q = 1 ; q <= num-i ; q++){
            printf("#");
        }
        for(int w = 1 ; w <= i ; w++){
            printf("*");
        }
        printf("\n");
    }
    //middle
    for(int i = 1 ; i <= num ; i++){
        printf("*");
    }
    printf("\n");
    //down
    for(int i = 1 ; i < num ; i++){
        for(int q = 1 ; q <= i ; q++){
            printf("#");
        }
        for(int w = 1 ; w <= num-i ; w++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}