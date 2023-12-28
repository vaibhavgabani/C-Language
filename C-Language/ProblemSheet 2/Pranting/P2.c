// Enter number :5
// * * * * * * * * *
// * * * *   * * * *
// * * *       * * *
// * *           * *
// *               *
#include<stdio.h>
int main(){
    int num;
    printf("Enter number :");
    scanf("%d",&num);
    int a = 1;
    for(int i = 1 ; i <= num *2 - 1; i++){
        printf("* ");
    }
    printf("\n");
    for(int i = 1 ; i < num ; i++){
        for(int q = 1 ; q <= num - i ; q++){
            printf("* ");
        }
        for(int w = 1 ; w <= a ; w++){
            printf("  ");
       }
       a = a + 2;
       for(int e = 1 ; e <= num - i ; e++){
        printf("* ");
       }
        printf("\n");
    }
    return 0;
}