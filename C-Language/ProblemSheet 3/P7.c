#include<stdio.h>
int main(){
    int num1 , num2 ,flag = 1 , len1 = 0 , len2 = 0;
    
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
    
    //process  
    //lenth counting
    for(int i = 0 ; i < str1[i] != '\0' ; i++){
        len1++;
    }
    for(int i = 0 ; i < str1[i] != '\0' ; i++){
        len2++;
    }
    //main process of compareing string
    if(len1 != len2){
        flag = 0;
    } else {
        for(int i = 0 ; i < len1 ; i++){
            if(str1[i] != str2[i]){
                flag = 0;
                break;
            }
        }
    }
    
    //output
    if(flag == 1){
        printf("Both string are same.\n");
    } else {
        printf("Both string are not same.");
    }
    return 0;
}