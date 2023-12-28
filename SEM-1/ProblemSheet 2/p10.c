#include<stdio.h>
int main(){
    int num,cnt = 0;
    printf("Enter number : ");
    scanf("%d",&num);
    printf("prime number is : ");
    for(int i = 1 ; i <= num ; i++){
        for(int j = 1 ; j <= i ; j++){
            if(i % j == 0){
                cnt++;
            }
        }
        if(cnt == 2){
            printf("%d ",i);
        }
        cnt = 0;
    }
    return 0;
}