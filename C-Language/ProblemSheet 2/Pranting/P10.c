#include<stdio.h>
int main(){
    int num;
    printf("Enter number :");
    scanf("%d",&num);
    for(int i = 1 ;  i <= num ; i++){
        int a = 1;
        int b = num;
        for(int j = 1 ; j <= num ; j++){
            if(i % 2 !=  0){
                printf("%d",a);
                a++;    
            } else {
                printf("%d",b);
                b--;
            }
        }
        printf("\n");
    }
    return 0;
}