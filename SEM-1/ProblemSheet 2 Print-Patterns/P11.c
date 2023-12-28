#include<stdio.h>
int main(){
    int num;
    printf("Enter number :");
    scanf("%d",&num);

    // 1 methord
    int a;

    for(int i = 1 ; i <= num ; i++){
        if(i % 2 != 0){
            a = 1;
        } else {
            a = 0;
        }
        for(int j = 1 ; j <= i ; j++){
            printf("%d ",a);
            if(a == 0){
                a = 1;
            } else {
                a = 0;
            }
        }
        printf("\n");
    }
    // 2 methord
     for(int i = 1 ; i <= num ; i++){
        for(int j = 1 ; j <= i ; j++){
          if((i+j) % 2 == 0){
              printf("1 ");
          } else {
              printf("0 ");
          }
        }
        printf("\n");
    }
    return 0;
}