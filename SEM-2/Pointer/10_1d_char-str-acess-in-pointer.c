#include<stdio.h>
int main(){
    char str[] = "QWERTY";
    char str2[] = "ABCD";
    char *p = str; // no need to use & (address operator) because array & string are its selfs pointer
    char *p2 = &str2[0];
    // *p = &str[0]; is valid statement
    // *p = &str; // generate warning
    printf("%s\n",str);
    while(*p!='\0'){
        printf("%c",*p);
         p++; // *p++ both are same;
    }
    printf("\n");
    printf("%s\n",str);
    printf("%c\n",*p2);  // we can direact acess character
    return 0;
}
