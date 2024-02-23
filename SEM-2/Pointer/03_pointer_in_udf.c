#include<stdio.h>
int sum(int ,int );
int div(int ,int );
int sub(int ,int );
int mul(int ,int );
int main(){
	int a , b , z;
	printf("Enter A :");
	scanf("%d",&a);
	printf("Enter B :");
	scanf("%d",&b);

	int (*p)(int , int);
	p = sum;
	z = (*p)(a,b);
	printf("%d ",z);
	return 0;
}
int sum(int a,int b){
	return a + b;
}
int div(int a,int b){
	return a / b;
}
int sub(int a,int b){
	return a - b;
}
int mul(int a,int b){
	return a * b;
}
