#include<stdio.h>
int main(){
    int num,tot = 0;
    printf("Enter Number :");
    scanf("%d",&num);
    for(int i = 1 ; i <= num ;i++){
        if(i % 2 != 0){
            tot = tot + i;
        }
    }
    printf("%d ",tot);
    return 0;
}