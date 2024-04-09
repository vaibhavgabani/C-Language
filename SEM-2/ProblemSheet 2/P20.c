#include<stdio.h>
int main(int argc , char const *argv[]){
    if(argc != 2){
        printf("Enter only 2 Argument.\n");
    } else {
        int num = atoi(argv[1]), cnt = 0;
        for(int i = 1 ; i <= num ; i++){
            if(num % i == 0){
                cnt++;
            }
        }
        if(cnt == 2){
            // printf("%d \n",cnt);
            printf("prime number.\n");
        } else {
            printf("not prime number.\n");
        }
    }
    return 0;
}