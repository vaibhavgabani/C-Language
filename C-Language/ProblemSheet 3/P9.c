#include<stdio.h>
int main(){
    int num1 , num2 ,len = 0;
    
    //input
    //input of size
    printf("Enter size of first array :");
    scanf(" %d",&num1);
    char str1[num1],str2[num1];
    //input of string  
    printf("Enter value in string : ");
    scanf(" %[^\n]s",str1);
    
    //process
    for(int i = 0 ; str1[i] !='\0' ; i++){
        len++;
    }
    for(int i = 0 ; i < len ; i++){
        str2[i] = str1[i];
    }
    //output
    printf("copy string is : %s",str2);
    return 0;
}