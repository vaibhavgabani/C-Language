#include<stdio.h>
int main(){
    int num;
    printf("Enter Number:");
    scanf("%d",&num);
    for(int i = 1 ; i <= num ; i++){
        int a = 1;
        for(int q = 1 ; q <= i ; q++){
            printf("#");
        }
        for(int w = 1 ; w <= num - i + 1; w++){
            printf("%d",a);
            a++;
        }
        a = a - 2;
        for(int e = 1 ; e <= num - i ; e++){
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
    return 0;
}