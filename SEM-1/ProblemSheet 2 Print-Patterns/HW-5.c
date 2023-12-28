#include<stdio.h>
int main(){
    int num;
    printf("Enter number :");
    scanf("%d",&num);
    
    int a = 1;

    for(int i = 1 ; i <= num ; i++){
        for(int j = 1 ; j <= i ; j++){
           printf("%d ",a);
           a = a + 2; 
        }
        printf("\n");
    }
    return 0;
}