#include<stdio.h>
int main(){
   // 1 type
   for(int i = 1 ; i <= 5 ; i++){
      for(int j = 5 ; j >= i; j--){
         printf("%d",i);
      }
      printf("\n");
   }
   // 2 methord
   for(int q = 5 ; q >= 0 ; q--){
      for(int w = 1 ; w <= q ; w++){
         printf("*");
      }
      printf("\n");
   }
    return 0;
}
