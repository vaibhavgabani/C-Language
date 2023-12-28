#include<stdio.h>
int main(){
    int num;
    printf("Enter number :");
    scanf("%d",&num);
    int a = 1;
    for(int i = 1 ; i <= num ; i++){
        int b = 1;
        for(int q = 1 ; q <= num - i ; q++){
            printf("#");
        }
        for(int w = 1 ; w <= a ; w++){
            printf("%d",b);
            b++;
        }
        a = a + 2;
        printf("\n");
    }
    return 0;
}