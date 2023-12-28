#include<stdio.h>
int main(){
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);
    int b = 5;
    for(int i = 1 ; i <= num ; i++){
        int a = num - i + 1;
        for(int q = 1 ; q <= i ; q++){
            printf("%d",a);
            a++;
        }
        for(int w = 1 ; w <= num - i ; w++){
            printf("%d",b);
        }
        printf("\n");
    }
    return 0;
}