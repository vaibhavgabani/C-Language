#include<stdio.h>
int main(){
    int num;
    printf("Enter number :");
    scanf("%d",&num);
    
    int a = num+2;
    
    for(int i = 1 ; i <= num ; i++){
        for(int j = 1 ; j <= a ; j++){
            if(i == 1 || j == 1 || i == num || j == a){
                printf("* ");
            } else {
                printf("  ");
            }
            
        }
        printf("\n");
    }
    return 0;
}