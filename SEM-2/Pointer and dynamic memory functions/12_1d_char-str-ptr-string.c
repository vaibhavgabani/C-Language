#include<stdio.h>
int main(){
    // change value of string by poniter
   char str[] = "QWERTY" , *ptr;
   ptr = str;
   printf("Str1 :\n");
   printf("Before : %s\n",str);
   ptr[0] = 'A';
   printf("After : %s\n",str);
   //note : we can change string char with help of pointer but we cn not change whole string value
   // change value of string by string
    char str2[] = "ABCD" , *ptr2;
    ptr2 = str2;
    printf("Str2 :\n");
    printf("str2  :%s\n",str2);
    str2[0] = 'a';
    printf("str2 :%s\n",ptr2);
    return 0;
}

