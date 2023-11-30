#include<stdio.h>
int main(){
    int num1 , num2 , len1 = 0 , len2 = 0, same = 0 , notsame = 0;
    printf("Enter size of first array :");
    scanf(" %d",&num1);
    printf("Enter size of Second array :");
    scanf(" %d",&num2);
    char str1[num1],str2[num2];
    printf("Enter value in 1 string : ");
    scanf(" %[^\n]s",str1);
    printf("Enter value in 2 string : ");
    scanf(" %[^\n]s",str2);

    for(int i = 0 ;  i < str1[i] != '\0';i++){
        len1++;
    }
    for(int i = 0 ; i < str2[i] !='\0' ; i++){
        len2++;
    }

    for(int i = 0 ; str1[i] !=0 && str2[i] !='\0' ; i++){
        if(str1[i] == str2[i]){
            same++;
        } else {
            notsame++;
        }
    }
    printf("char are same in both string : %d\n",same);
    printf("char are notsame in both string : %d\n",notsame);
    return 0;
}