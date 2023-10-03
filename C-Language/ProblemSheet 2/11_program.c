#include<stdio.h>
int main(){
   int max,n,r,ams,sum = 0;
   printf("Enter Number :");
   scanf("%d",&max);
   for(int i = 1 ; i <= max ; i++){
    n = i;
    ams = n;
    sum = 0;
    while(n!=0){
        r= n%10;
        sum = sum+(r*r*r);
        n= n/10;
    }
    if(sum == ams){printf("%d\n",ams);}
   }
    return 0;
}