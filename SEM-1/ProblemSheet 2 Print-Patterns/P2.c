#include<stdio.h>
int main(){
    int num;
    printf("Enter number :");
    scanf("%d",&num);
    for(int i = 1 ; i <= num ; i++){
        for(int j = 1 ; j <= num ; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}