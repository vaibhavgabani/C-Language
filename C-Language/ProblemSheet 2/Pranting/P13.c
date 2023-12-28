#include<stdio.h>
int main(){
    int num;
    printf("Enter Number :");
    scanf("%d",&num);
    int x = num;
    for(int i = 1 ; i <= num ; i++){
        int y = 2;
        for(int q = 1 ; q <= i; q++){
            printf("#");
        }
        for(int w = 1 ; w <= num - i + 1; w++){
            printf("%d",x);
             x--;
        }
        x = num - i;
        for(int e = 1 ; e <= num - i ; e++){
            printf("%d",y);
            y++;
        }
        printf("\n");
    }
    return 0;
}