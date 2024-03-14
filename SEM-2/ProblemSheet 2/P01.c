#include<stdio.h>
void input1d(int * , int);
void print1d(int * , int);
void ashort1d(int * , int);
void dshort1d(int * , int);
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

	//Ascending short
	ashort1d(arr,size);
	printf("\n\nShorting of Array with pointer in Ascending Order : ");
	print1d(arr,size);

	//descending short
	dshort1d(arr,size);
	printf("\n\nShorting of Array with pointer in Descending Order : ");
	print1d(arr,size);

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
void ashort1d(int *ptr, int size){
	for(int i = 0 ; i < size ; i++){
		for(int j = 0 ; j < size ; j++){
			if(*(ptr+i) < *(ptr+j)){
				int temp = *(ptr+j);
				*(ptr+j) = *(ptr+i);
				*(ptr+i) = temp;
			}
		}
	}
}
void dshort1d(int *ptr, int size){
	for(int i = 0 ; i < size ; i++){
		for(int j = 0 ; j < size ; j++){
			if(*(ptr+i) > *(ptr+j)){
				int temp = *(ptr+j);
				*(ptr+j) = *(ptr+i);
				*(ptr+i) = temp;
			}
		}
	}
}
