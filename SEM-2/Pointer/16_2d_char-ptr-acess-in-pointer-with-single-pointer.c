#include<stdio.h>
int main(){
    char str[3][20] = {
        {"balaguruswamy"},
        {"yashwant kanetkar"},
        {"william stalling"}
    };
    char *p;
    p = str[0];
    printf("address = %u value = : %s\n",&str[0],p);
    //output of all
    for(int i = 0 ; i< 3 ; i++){
    	printf("address = %u value = : %s\n",&str[i],p+i);
    }
    return 0;
}
