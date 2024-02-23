
#include<stdio.h>
int main(){
	int n=5,*p;
	p = &n;
	printf("address : %u value :%d\n",&n,n);
	printf("Enter n : ");
	scanf("%d",&*p);
	printf("address : %u value :%d",&n,n);
	return 0;
}

