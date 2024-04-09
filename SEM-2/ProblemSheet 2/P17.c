#include<stdio.h>
int main(int argc , char const  *argv[]){
    if(argc != 2){
        printf("Enter valid argument.");
    } else {
        FILE *fptr;
        fptr = fopen(argv[1],"r");
        if(fptr == NULL){
            printf("File not found.");
            return 1;
        }
        char ch;
        while((ch = getc(fptr)) != EOF){
            printf("%c",ch);
        }
        fclose(fptr);
    }
    return 0;
}