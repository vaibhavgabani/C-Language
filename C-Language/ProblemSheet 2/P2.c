#include<stdio.h>
int main(){
    int num,prime = 1;
    printf("Enter number : ");
    scanf("%d",&num);
    for(int i = 1 ; i <= num ; i++){
        prime = prime * i ;
    }
    printf("Enter number prime is : %d", prime);
    return 0;
}