#include<stdio.h>
int main(){
    
    FILE *fptr;
    fptr = fopen("03-file.txt","w");
    // input value
    int n;
    printf("Enter Value of n : ");
    scanf("%d",&n);
    
    // store in file
    putw(n,fptr);
    fclose(fptr);

    fptr = fopen("03-file.txt","r");
    // print 
    int k = getw(fptr);
    printf("%d",k);

    //close file
    fclose(fptr);
    return 0;
}