#include<stdio.h>
int main(){
    int len = 0,temp;
    char str[100];
    scanf("%s",str);
    for(int i = 0 ; str[i]!='\0' ; i++){
        len++;
    }
    for(int i = 0 , j = len-1 ; i<j ; i++,j--){
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
    }
    printf("%s",str);
    return 0;
}