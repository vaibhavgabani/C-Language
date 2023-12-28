#include<stdio.h>
int main(){
    int num;
    printf("Enter number :");
    scanf("%d",&num);
    for(int i = 0 ; i < num ; i++){
        int a = 65;
        for(int j = 0 ; j < num ; j++){
            printf("%c ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}