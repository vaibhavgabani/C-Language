#include<stdio.h>
void input2d(int *,int , int);
void print2d(int *,int , int);
void asort(int *,int , int);
void dsort(int *,int , int);
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

	printf("\nSort in Accending Order :\n");
	asort(&arr[0][0],m,n);
	print2d(&arr[0][0],m,n);
	printf("\nSort in Decending Order :\n");
	dsort(&arr[0][0],m,n);
	print2d(&arr[0][0],m,n);
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
void asort(int *ptr,int m, int n){
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			for(int k = 0 ; k < m ; k++){
				for(int z = 0 ; z < n ; z++){
					if(*(ptr + i * n + j) < *(ptr + k * n + z)){
						int temp = *(ptr + k * n + z);
						*(ptr + k * n + z) = *(ptr + i * n + j);
						*(ptr + i * n + j) = temp;
					}
				}
			}
		}
	}
	return;
}
void dsort(int *ptr,int m, int n){
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			for(int k = 0 ; k < m ; k++){
				for(int z = 0 ; z < n ; z++){
					if(*(ptr + i * n + j) > *(ptr + k * n + z)){
						int temp = *(ptr + k * n + z);
						*(ptr + k * n + z) = *(ptr + i * n + j);
						*(ptr + i * n + j) = temp;
					}
				}
			}
		}
	}
	return;
}
