#include<stdio.h>
int main(){
    int n,totodd,toteven;
    printf("Enter Number : ");
    scanf("%d",&n);
    for(int i = 1 ; i <= n ; i++){
        totodd = 0;
        toteven = 0;
        for(int j = 1 ; j<= i; j++){
            if(j % 2 != 0){
                totodd = totodd + j;
            }
        }
    }
    printf("Sum of odd is  : %d\n",totodd);
    return 0;
}