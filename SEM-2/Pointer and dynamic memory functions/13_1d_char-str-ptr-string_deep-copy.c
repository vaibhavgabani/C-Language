#include<stdio.h>
int main(){
    int cnt = 0;
    char str1[] = "QWERTY" , *ptr1;
    ptr1 = str1;
    while(*ptr1 !='\0'){
        cnt++;
        ptr1++;
    }
    char str2[cnt+1] , *ptr2;
    ptr1 = str1;
    ptr2 = str2;
   for(int i = 0 ; i < cnt ; i++){
        *ptr2 = *ptr1;
        ptr2++;
        ptr1++;
   }
    *ptr2 = '\0';
    printf("%s",str2);
    return 0;
}

