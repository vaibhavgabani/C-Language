#include<stdio.h>
int main(){
    int row;
    printf("Enter rows :");
    scanf("%d",&row);

    for(int i = row ; i >= 0 ; i--){
        for(int s = 1 ; s <= row-i ; s++){
            printf(" ");
        }
        for(int j = 1 ; j <= 2*i-1 ;j++){
            printf("*");
        }
        printf("\n");
    }
}