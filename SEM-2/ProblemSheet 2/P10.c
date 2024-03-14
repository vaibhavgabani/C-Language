#include<stdio.h>
int arm(int *);

int main(){
	int n,res;
	printf("Enter n : ");
	scanf("%d",&n);

	res=arm(&n);

	if(res==0){
		printf("\n%d is Armstrong Number",n);
	}else{
		printf("\n%d is Not Armstrong Number",n);
	}
	return 0;
}

int arm(int *n){
	int r;
	int count=0,a=*n;
	while(a>0){
		a=a/10;
		count++;
	}
	int b=*n,sum=0;
	while(b>0){
		int pro=1;
		r=b%10;
		for(int j=1;j<=count;j++){
			pro=pro*r;
		}
		b=b/10;
		sum=sum+pro;
	}
	if(sum==*n){
		return 0;
	}else {
		return 1;
	}
}

