#include<stdio.h>
void input2d(int m, int n,int *ptr[m][n]);
void print2d(int m, int n,int *ptr[m][n]);
void ashort2d(int m, int n,int *ptr[m][n]);
void dshort2d(int m, int n,int *ptr[m][n]);
int main(){
	int m , n ;
	printf("Enter M of 2D Array : ");
	scanf("%d",&m);
	printf("Enter n of 2D Array : ");
	scanf("%d",&n);
	int arr[m][n],*ptr[m][n];

	//assign address to ptr
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			ptr[i][j] = &arr[i][j];
		}
	}

	//input
	input2d(m,n,ptr);

	//output
	//enter data
	print2d(m,n,ptr);

	//Ascending sort
	ashort2d(m,n,ptr);
	printf("\n\nSorting of Array with pointer in Ascending Order : \n");
	print2d(m,n,ptr);

	//Ascending sort
	dshort2d(m,n,ptr);
	printf("\n\nSorting of Array with pointer in Descending Order : \n");
	print2d(m,n,ptr);
	printf("\n\n");

	return 0;
}
void input2d(int m, int n,int *ptr[m][n]){
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			printf("Enter value at [%d][%d] : ",i+1,j+1);
			scanf("%d",&*ptr[i][j]);
		}
	}
	return;
}
void print2d(int m, int n,int *ptr[m][n]){
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			printf("%d ",*ptr[i][j]);
		}
		printf("\n");
	}
	return;
}
void ashort2d(int m, int n,int *ptr[m][n]){
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			for(int k = 0 ; k < m ; k++){
				for(int z = 0 ; z < n ; z++){
					if(*ptr[i][j] < *ptr[k][z]){
						int temp = *ptr[k][z];
						*ptr[k][z] = *ptr[i][j];
						*ptr[i][j] = temp;
					}
				}
			}
		}
	}
	return;
}
void dshort2d(int m, int n,int *ptr[m][n]){
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			for(int k = 0 ; k < m ; k++){
				for(int z = 0 ; z < n ; z++){
					if(*ptr[i][j] > *ptr[k][z]){
						int temp = *ptr[k][z];
						*ptr[k][z] = *ptr[i][j];
						*ptr[i][j] = temp;
					}
				}
			}
		}
	}
	return;
}

