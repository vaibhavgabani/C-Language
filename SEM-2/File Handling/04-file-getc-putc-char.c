#include<stdio.h>
int main(){
   
    FILE *fptr;
    
    //file insert
    fptr = fopen("04-file.txt","r");
    char c;
    printf("Enter char : ");
    scanf("%c",&c);

    // main to file
    putc(c,fptr);
    fclose(fptr);

    // file print
    fptr = fopen("04-file.txt","r");
    char q;
    q = getc(fptr);
    printf("%c",q);
    fclose(fptr);
    return 0;
}