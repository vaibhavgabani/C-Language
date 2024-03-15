#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("main.txt","r");
    if(fptr == NULL){
        printf("File not found");
    }
    fclose(fptr);
    return 0;
}