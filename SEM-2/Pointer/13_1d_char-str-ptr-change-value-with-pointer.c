#include <stdio.h>

int main() {

    // Write C code here
    char str[] = "QWERTY";
    printf("%s\n",str);
    str[0] = 'a';
    printf("%s\n",str);

    //in poniter
    printf("\nIn pointer : \n");
    char *str1 = "QWERTY";
    printf("%s\n",str1);
    str1 = "ASDF";
    printf("%s\n",str1);

    //change value with pointer
    printf("\nchange value with pointer:\n");
    char str2[] = "QWERTY";
    char *p = str;
    printf("%s\n",p);
    p = "asdf";
    printf("%s\n",p);
    return 0;
}

