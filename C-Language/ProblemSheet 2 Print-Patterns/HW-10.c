#include<stdio.h>
int main(){
    int num;
    printf("Enter number :");
    scanf("%d",&num);
    int a = 2 * num - 1;
    for(int i = num ; i >= 1 ; i--){
        for(int j = 1 ; j <= num - i ; j++){
            printf("  ");
        }
        for(int k = 1 ; k <= a ; k++){
            printf("* ");
        }
        a = a - 2;
        printf("\n");
    }
    return 0;
}