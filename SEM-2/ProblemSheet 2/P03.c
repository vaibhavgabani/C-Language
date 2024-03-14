#include<stdio.h>
void input1d(int * , int);
void print1d(int * , int);
int sum1d(int * , int);
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

	//sum
	printf("Sum is : %d",sum1d(arr,size));
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

int sum1d(int *ptr, int size){
	int sum = 0;
	for(int i = 0 ; i < size ; i++){
		sum = sum + *(ptr+i);
	}
	return sum;
}
