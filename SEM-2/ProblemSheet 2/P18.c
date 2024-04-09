#include<stdio.h>
int main(int argc , char const *argv[]){
    if(argc != 3){
        printf("Enter Valid Argument.");
    } else {
        char ch;
        FILE *fptr1 , *fptr2;
        fptr1 = fopen(argv[1],"r");
        fptr2 = fopen(argv[2],"w");
        if(fptr1 == NULL || fptr2 == NULL) {
            printf("Error in opening file.\n");
            return 1;
        }
        while((ch = getc(fptr1)) != EOF){
            putc(ch,fptr2);
        }
        printf("Copied completed");
        fclose(fptr1);
        fclose(fptr2);
    }
    return 0;
}