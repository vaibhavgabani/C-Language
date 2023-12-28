#include<stdio.h>
int main(){
    int num;
    printf("Enter number :");
    scanf("%d",&num);

    for(int i = 1 ; i <= num ; i++){
        int a = 65;
        for(int j = 1 ; j <= num-i; j++){
            printf("  ");
        }
        for(int k = 1 ; k <= i ; k++){
            printf("%c ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}