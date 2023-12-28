// 6) Write a C Program to concatenate N characters from target string without using in built
// // string functions.
// Enter zise of 1 string :3
// Enter zise of 2 string :3
// Enter 1 string value : ABC
// Enter 2 string value : DEF
// Enter number which you want to transfer from 1 string : 2
// Enter number which you want to transfer from 2 string : 2
// Concatenate is : ABDE
#include<stdio.h>
int main(){
    int num1 , num2 , num3 , t1 , t2 , len1 = 0 , len2 = 0;
    //input of string size
    printf("Enter zise of 1 string :");
    scanf("%d",&num1);
    printf("Enter zise of 2 string :");
    scanf("%d",&num2);
    
    num3 = num1+num2;
    char str1[num1], str2[num2] , str3[num3];

    //input of string value
    printf("Enter 1 string value : ");
    scanf(" %[^\n]s",str1);
    printf("Enter 2 string value : ");
    scanf(" %[^\n]s",str2);

    //input of how total tranfer 
    printf("Enter number which you want to transfer from 1 string : ");
    scanf("%d",&t1);
    printf("Enter number which you want to transfer from 2 string : ");
    scanf("%d",&t2);
    
    //process 
    //length counting
    for(int i = 0 ; str1[i] != '\0' ; i++){
        len1++;
    }
    for(int i = 0 ; str2[i] != '\0' ; i++){
        len2++;
    }
    if(t1 <= len1 && t2 <= len2){
        //tranfer 1 string to 3 string
        int i;
        for(i = 0 ; i < t1 ; i++){
            str3[i] = str1[i];
        }
        //tranfer 2 string to 3 string
        for(int j = 0 ; j < t2 ; j++){
            str3[i] = str2[j];
            i++;
        }
        //null 3 string
        str3[i] = '\0';
        //output
        printf("Concatenate is : %s\n",str3);
    } else {
        printf("Enter valid number.\n");
    }
    return 0;
}