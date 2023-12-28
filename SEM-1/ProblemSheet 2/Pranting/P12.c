#include<stdio.h>
int main(){
    int num;
    printf("Enter Number :");
    scanf("%d",&num);
    int a = num * 2 - 1;
    for(int i = 1 ; i <= num ; i++){
        int b = 1;
        for(int j = 1 ; j <= a ; j++){
            printf("%d",b);
            b++;
        }
        a = a - 2;
        printf("\n");
    }
    return 0;
}