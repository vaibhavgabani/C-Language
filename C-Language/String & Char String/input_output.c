#include<stdio.h>
#include<string.h> // use for using string inside code
int main(){
    // //normal
    // //1
    // char a[50];
    // printf("Enter here : ");
    // scanf(" %s",a); //only store in single word.
    // printf("your input is : %s \n",a);
    
    // //2
    // char c[50];
    // printf("Enter here : ");
    // scanf(" %[^\n]s",c); //only store in single word. //[^\n] use this to take full input
    // printf("your input is : %s \n",c);
   

    //finction
    char str[50];
    puts("Enter value :");
    gets(str);
    puts("The you Enter is : ");
    puts(str); //puts auto give \n(next line).
    return 0;
}