#include<stdio.h>
int main(){
    int num;
    printf("Enter number :");
    scanf("%d",&num);
    
    int a = 1;

    for(int i = 1 ; i <= num ; i++){
        for(int j = 1 ; j <= num-i ; j++){
            printf("  ");
        }
        for(int k = 1 ; k <= a ; k++){
            printf("%d ",k);
        }
        a = a + 2;
        printf("\n");
    }
    return 0;
}