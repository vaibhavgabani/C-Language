#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fptr;
    int vowel = 0 , consonant = 0;
    int c;
    fptr = fopen("student.txt","r");
    if(fptr == NULL){
        printf("File not found.\n");
        return 1;
    }
    while((c = fgetc(fptr)) != EOF){
        if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U'){
         vowel++;   
        } else {
         consonant++;   
        }
    }
    fclose(fptr);
    printf("Total vowel is : %d\n",vowel);
    printf("Total consonant is : %d\n",consonant);
    return 0;
}