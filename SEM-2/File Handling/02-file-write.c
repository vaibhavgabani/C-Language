#include<stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("02-file-write.txt","w");
    fclose(fptr);
    return 0;
}