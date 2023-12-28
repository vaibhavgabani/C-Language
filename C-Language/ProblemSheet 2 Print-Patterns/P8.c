#include<stdio.h>
int main(){
    int num;
    printf("Enter number :");
    scanf("%d",&num);
    
    int haf = (num /2) + 1;
    
    for(int i = 1 ; i <= num ; i++){
        for(int j = 1 ; j <= num ; j++){
            if(i == haf || j == haf){
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}