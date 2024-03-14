#include<stdio.h>
void input2d(int *,int , int);
void print2d(int *,int , int);
int sum(int *,int ,int);
int main(){
	int m , n ;
	printf("Enter M of 2D Array : ");
	scanf("%d",&m);
	printf("Enter n of 2D Array : ");
	scanf("%d",&n);
	int arr[m][n];

	//input
	input2d(&arr[0][0],m,n);
	//output
	printf("Enter Data :\n");
	print2d(&arr[0][0],m,n);

	int s = sum(&arr[0][0] , m , n);
	printf("Sum of array is : %d",s);

	return 0;
}
void input2d(int *ptr,int m , int n){
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			printf("Enter value at [%d][%d] : ",i+1,j+1);
			scanf("%d",&*(ptr + i * n + j));
		}
	}
	return;
}
void print2d(int *ptr,int m , int n){
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			printf("%d ",*(ptr + i * n + j));
		}
		printf("\n");
	}
	return;
}
int sum(int *ptr,int m,int n){
	int sum = 0;
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			sum +=*(ptr + i * n + j);
		}
	}
	return sum;
}
