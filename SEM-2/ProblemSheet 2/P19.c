#include<stdio.h>
int main(int argc , char const *argv[]){
    if(argc != 2){
        printf("Enter only 2 argument.\n");
    } else {
        int fact = 1;
        for(int i = 1 ; i <= atoi(argv[1]) ; i++){
            fact = fact * i;
        }
        printf("Factorial : %d ",fact);
    }
    return 0;
}