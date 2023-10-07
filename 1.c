#include<stdio.h>
int main(){
    int n = 5;
    for(int i = n-1 ; i <= n ; i++){
        for(int j = 0; j<= n ; j++){
            if(j>=i){
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}