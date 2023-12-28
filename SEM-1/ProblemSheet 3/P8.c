// 8) Write a C Program to compare n characters of two strings without using in built string 
// // functions.
// Enter size of first array :4
// Enter size of Second array :4
// Enter value in 1 string : qwer
// Enter value in 2 string : qwre
// Enter total number which you won compare : 4
// total 2 characters are same.
// total 2 characters are notsame
#include<stdio.h>
int main(){
    int num1 , num2 , compare ,match = 0, notmatch = 0 , len1 = 0 , len2 = 0;
    
    //input
    //input of size
    printf("Enter size of first array :");
    scanf(" %d",&num1);
    printf("Enter size of Second array :");
    scanf(" %d",&num2);
    char str1[num1],str2[num2];
    //input of string  
    printf("Enter value in 1 string : ");
    scanf(" %[^\n]s",str1);
    printf("Enter value in 2 string : ");
    scanf(" %[^\n]s",str2);
    //input of number which you won compare
    printf("Enter total number which you won compare : ");
    scanf("%d",&compare);
    
    //process with output
    //length
    for(int i = 0 ; str1[i] !='\0' ;i++){
        len1++;
    }
    for(int i = 0 ; str2[i] !='\0' ;i++){
        len2++;
    }
    //process of compearing & output
    if(compare<= len1 && compare <= len2){
        for(int i = 0 ; i < compare ; i++){
            if(str1[i] == str2[i]){
                match++;
            } else {
                notmatch++;
            }
        }
    //output
    printf("total %d characters are same.\n",match);
    printf("total %d characters are notsame.\n",notmatch);
    } else {
        printf("Enter valid number.\n");
    }
    return 0;
}