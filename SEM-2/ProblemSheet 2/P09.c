#include<stdio.h>
void input1d(int * , int);
void print1d(int * , int);
int prime(int );
void prime1d(int *,int);
int main(){
	int size;
	printf("Enter Sizer of 1D Array :");
	scanf("%d",&size);
	int arr[size];

	// input
	input1d(arr,size);

	//Output
	// enter data
	printf("\nEnter Data : ");
	print1d(arr,size);

	printf("\n");
	//prime
	prime1d(arr,size);
	return 0;
}
void input1d(int *ptr, int size){
	for(int i = 0 ; i < size ; i++){
		printf("Enter value at [%d] : ",i+1);
		scanf("%d",&*(ptr+i));
	}
	return;
}
void print1d(int *ptr, int size){
	for(int i = 0 ; i < size ; i++){
		printf("%d ",*(ptr+i));
	}
	return;
}
int prime(int n){
	int cnt = 0;
	for(int i = 1 ; i <= n ; i++){
		if(n % i == 0){
			cnt++;
		}
	}
	if(cnt == 2){
		return 1;
	} else {
		return 0;
	}
}

void prime1d(int *ptr,int size){
	int cnt = 0;
	for(int i = 0 ; i < size ; i++){
		cnt = prime(*(ptr+i));
		if(cnt == 1){
			printf("%d is prime number.\n",*(ptr+i));
		}
	}
	return;
}
