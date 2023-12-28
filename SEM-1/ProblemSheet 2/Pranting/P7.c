#include<stdio.h>
int main(){
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    for(int i = 1 ; i <= num ; i++){
        for(int q = 1 ; q <= i ; q++){
            if(q % 2 != 0){
                printf("1");
            } else {
                printf("0");
            }
            
        }
        printf("\n");
    }
    return 0;
}