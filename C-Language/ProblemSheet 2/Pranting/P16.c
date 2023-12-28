#include<stdio.h>
int main(){
    int num ; 
    printf("Enter number:");
    scanf("%d",&num);
    for(int i = 1 ; i <= num ; i++){
        int z = num;
        for(int j = 1 ; j <= i ; j++){
            printf("#");
        }
        for(int k = 1 ; k<= num- i + 1; k++){
            printf("%d",z);
            z--;
        }
        printf("\n");
    }
    return 0;
}