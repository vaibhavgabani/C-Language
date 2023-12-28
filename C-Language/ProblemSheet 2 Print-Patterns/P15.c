#include<stdio.h>
int main(){
    int num;
    printf("Enter number :");
    scanf("%d",&num);
    
    int a = 1;

   for(int i = 1 ; i <= num ; i++){
    int b = 1;
    for(int s = 1 ; s <= num-i ; s++){
        printf("  ");
    }
    for(int j = 1 ; j < i ; j++){
        printf("%d ",j);
        b++;
    }
    for(int k = b ; k >= 1 ; k--){
        printf("%d ",k);
    }
    printf("\n");
   }
    return 0;
}