#include<stdio.h>
int main(){
    int num;
    printf("Enter number :");
    scanf("%d",&num);
    
    int a = 1;
    int b = 1;
    for(int i = 1 ; i <= num ; i++){
        printf("%d ",b);
        b++;
    }
    b = b - 2; 
    for(int i = 1 ; i < num ; i++){
        printf("%d ",b);
        b--;
    }
    printf("\n");
    for(int i = 1 ; i <= num ; i++){
        int b = 1;
        for(int q = 1 ; q <= num - i ; q++){
            printf("%d ",b);
            b++;
        }
        for(int w = 1 ; w <= a ; w++){
            printf("  ");
        }
        b = b - 1;
        a = a + 2;
        for(int e = 1 ; e <= num - i ; e++){
            printf("%d ",b);
            b--;
        }
        printf("\n");
    }
    return 0;
}