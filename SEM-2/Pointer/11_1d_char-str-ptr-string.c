#include<stdio.h>
int main(){
    char *ptr = "QWERTY";
    printf("%s\n",ptr);
    ptr = "ABCD";
    printf("%s",ptr);
    // note :- both string are different mean both store on different memoy locaction
    return 0;
}
