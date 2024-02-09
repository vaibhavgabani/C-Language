/*
 * P11.c
 *
 *  Created on: 31-Jan-2024
 *      Author: root
 */
#include<stdio.h>
void input(int m,int n,int arr[m][n]);
void output(int m,int n ,int arr[m][n]);
void sorta(int m,int n,int arr[m][n]);
void sortd(int m,int n,int arr[m][n]);
int main(){
	int m,n;
	printf("Enter Size of row: ");
	scanf("%d",&m);
	printf("Enter Size of cols: ");
		scanf("%d",&n);
	int arr[m][n];
	//input
	input(m,n,arr);
//	output(m,n,arr);
	//short A
	sorta(m,n,arr);
	printf("Shorting in ascending order :\n");
	output(m,n,arr);
	//short D
	sortd(m,n,arr);
	printf("Shorting in descending order :\n");
	output(m,n,arr);
return 0;
}
void input(int m,int n,int arr[m][n]){
	for(int i = 0; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			printf("Enter value at [%d][%d] :",i+1,j+1);
					scanf("%d",&arr[i][j]);
		}
	}
	return;
}
void output(int m,int n,int arr[m][n]){
	for(int i = 0; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return;
}
void sorta(int m,int n,int arr[m][n]){
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			for(int k = 0 ; k < m ; k++){
				for(int z = 0 ; z < n ; z++){
					if(arr[i][j] < arr[k][z]){
						int temp = arr[k][z];
						arr[k][z] = arr[i][j];
						arr[i][j] = temp;
					}
				}
			}
		}
	}
	return;
}
void sortd(int m,int n ,int arr[m][n]){
	int temp;
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			for(int k = 0 ; k < m ; k++){
				for(int z = 0 ; z < n ; z++){
					if(arr[i][j] > arr[k][z]){
						temp = arr[k][z];
						arr[k][z] = arr[i][j];
						arr[i][j] = temp;
					}
				}
			}
		}
	}
	return;
}

