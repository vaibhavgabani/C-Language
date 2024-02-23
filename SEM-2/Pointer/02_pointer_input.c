
#include<stdio.h>
int main(){
	int n=5,*p;
	p = &n;
	printf("address : %u value :%d\n",&n,n); 
	printf("Enter n : "); // change value of with help of pointer
	scanf("%d",&*p);  // &*p and *p both are same 
	printf("address : %u value :%d",&n,n);
	return 0;
}

