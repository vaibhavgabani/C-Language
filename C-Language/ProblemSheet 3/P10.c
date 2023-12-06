// 10) Write a C program to copy N characters of one string into another string without 
// // using inbuilt functions.
// Enter size of first array :5
// Enter value in string : ABCDE
// Enter number where you have to stop copy : 3
// Copyed string is : ABC 

#include<stdio.h>
int main(){
    int num , num1 , len1 = 0;
    
    //input
    //input of size
    printf("Enter size of first array :");
    scanf(" %d",&num1);
    char str1[num1],str2[num1];
    //input of string  
    printf("Enter value in string : ");
    scanf(" %[^\n]s",str1);
    //input of number which won to stop
    printf("Enter number where you have to stop copy : ");
    scanf("%d",&num);
    //process
    //length counting
    for(int i = 0 ; str1[i] != '\0' ; i++){
        len1++;
    }
    //process & output  
    if(num<=len1){
        for(int i = 0 ; i < num ; i++){
            str2[i] = str1[i];
        }
        printf("Copyed string is : %s \n",str2);
    } else {
        printf("Enter valid number for copy.\n");
    }
    return 0;
}