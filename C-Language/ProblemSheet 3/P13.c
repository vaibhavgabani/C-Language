#include<stdio.h>
int main(){
    int num1 , len = 0 ,temp = 0 ,vowels = 0 , consonant = 0;
    //input of string size
    printf("Enter size of string : ");
    scanf("%d",&num1);
    char str1[num1];
    //input of string
    printf("Enter value in sting : ");
    scanf(" %[^\n]s",str1);

    //process
    //cont length
    for(int i = 0 ; str1[i] != '\0' ; i++){
        len++;
    }
    //process
    for(int i = 0 ; i < len ; i++){
        if (str1[i] =='A'||str1[i] =='a'||
        str1[i] =='E'||str1[i] =='e'||
        str1[i] =='I'||str1[i] =='i'||
        str1[i] =='O'||str1[i] =='o'||
        str1[i] =='U'||str1[i] =='u'){
            vowels++;
        } else {
            consonant++;
        }
    }
    
    //output
    printf("Total number of Vowels is : %d \n",vowels);
    printf("Total number of Consonant is : %d \n",consonant);
    return 0;
}