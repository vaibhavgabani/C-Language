#include<stdio.h>
int main(){
    int str[20],n,cnt = 0;
    char c;
    printf("Enter value of sting :");
    scanf(" %[^\n]s",str);

    for(int i = 0 ; str[i]!='\0' ; i++){
       cnt++;
    }

    printf("Enter value which possitation you have to add :");
    scanf("%d",&n);
    printf("Enter value to add :");
    scanf(" %c",&c);
    
    for(int i = cnt ; i>=n ; i--){
        str[i+1] = str[i];
    }

    str[n] = c;

    printf("%s" ,str);
    return 0;
}