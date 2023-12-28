#include<stdio.h>
int main(){
    int num;
    printf("Enter number :");
    scanf("%d",&num);
    // 1 metnord
    for(int i = num ; i>=1 ; i--){
        for(int j = i ; j >= 1 ; j--){
            printf("* ");
        }
        printf("\n");
    }    
    // 2 methord
    for(int i = 0 ; i < num ; i++){
        for(int j = 0 ; j < num-i; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}