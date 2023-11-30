#include<stdio.h>
int main(){
    int num1 , temp = 0,len = 0;

    //input
    //input of size
    printf("Enter size of first array :");
    scanf(" %d",&num1);
    char str1[num1],str2[num1];
    //input of string  
    printf("Enter value in string : ");
    scanf(" %[^\n]s",str1);
    
    //process
    //legth calculate
    for(int i = 0 ; str1[i] != '\0' ; i++){
        len++;
    }
    //procees of reverce 
    for(int i = 0 , j = len-1 ; i < j ; i++ , j--){
        temp = str1[j];
        str1[j] = str1[i];
        str1[i] = temp;
    }

    //output
    printf("reverce string is : %s",str1);
    return 0;
}