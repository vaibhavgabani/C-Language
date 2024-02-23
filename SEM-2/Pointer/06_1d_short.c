#include<stdio.h>
void input_1d_ptr(int *,int);
void print_1d_ptr(int *,int);
void swap_1d_ptr(int *,int);
int main(){
	int n = 5;
	int arr[n];

	input_1d_ptr(arr,n);
	printf("\nEnter value :");

	print_1d_ptr(arr,n);

	swap_1d_ptr(arr,n);
	printf("\nSwap :");
	print_1d_ptr(arr,n);

	return 0;
}
void input_1d_ptr(int *ptr,int n){
	for(int i = 0 ; i < n ; i++){
			printf("Enter at %d : ",i+1);
			scanf("%d",&*(ptr+i));    // both 2 are work same ptr+i,&*(ptr+i)
	}
	return;
}
void print_1d_ptr(int *ptr,int n){
	for(int i = 0 ; i < n ; i++){
		printf("%d ",*(ptr+i));
	}
	return;
}
void swap_1d_ptr(int *ptr,int n){
	int temp = 0;
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			if(*(ptr+i) < *(ptr+j)){
				temp = *(ptr+i);
				*(ptr+i) = *(ptr+j);
				*(ptr+j) = temp;
			}
		}
	}
	return;
}
