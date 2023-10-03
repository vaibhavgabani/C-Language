#include<stdio.h>
void main(){
    int min,max,count;
    printf("Enter Min :");
    scanf(" %d",&min);
    printf("Enter Max :");
    scanf(" %d",&max);
    for(int i = min ; i <= max ; i++){
        count = 0;
        for(int j = 1 ; j <= i; j++){
            if(i%j==0){
                count++;
            }
        }
        if(count == 2){
            printf("%d ",i);
        }
    }
}