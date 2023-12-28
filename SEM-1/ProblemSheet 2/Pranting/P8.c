#include<stdio.h>
int main(){
    int num;
    printf("Enter number :");
    scanf("%d",&num);
    for(int i = 1 ; i <= num ; i++){
        int a = 5;
        for(int j = 1 ; j <= i ; j++){
            printf("#");
        }
        for(int q = 1 ; q <= num - i + 1; q++){
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
    return 0;
}