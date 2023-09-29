#include<stdio.h>
int main(){
    int n,f,s,cnt=0;
    printf("Enter N1 :");
    scanf("%d",&f);
    printf("Enter N2 :");
    scanf("%d",&s);
do
{
 cnt++;
 f=f-s;
}while(f>0);
printf("%d",cnt);
    return 0;
}