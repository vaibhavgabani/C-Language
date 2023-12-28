#include<stdio.h>
int main(){
    int num;
    printf("Enter number :");
    scanf("%d",&num);
    for(int i = 1 ; i <= num ; i++){
        int n = 1;
        int a = 65;
        for(int j = 1 ; j <= i ; j++){
            if(i % 2 == 0 ){
                printf("%d ",n);
            } else {
                printf("%c ",a);
            }
            n++;
            a++;
        }
        printf("\n");
    }
    return 0;
}