#include<stdio.h>
int main(){
    char str[3][20] = {
        {"balaguruswamy"},
        {"yashwant kanetkar"},
        {"william stalling"}
    };
    char *ptr[3];
    for(int i = 0 ; i < 3 ; i++){
        ptr[i] = str[i];
    }
    for(int i = 0 ; i < 3 ; i++){
        printf("at : %d row address = %u value = %s\n",i,&str[i],str[i]);
    }
    return 0;
}
