#include<stdio.h>
int main(){
    int num;
    printf("Enter Number:");
    scanf("%d",&num);
    for(int i = 0 ; i< num ; i++){
        for(int j = 1 ; j <= i ; j++){
            printf("#");
        }
        for(int q = 1 ; q <= num - i ; q++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}