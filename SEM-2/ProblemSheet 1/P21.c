/*
 * P21.c
 *
 *  Created on: 01-Feb-2024
 *      Author: root
 */
#include<stdio.h>
void input(int m,int n,int arr[m][n]);
void output(int m,int n ,int arr[m][n]);
int sum(int m,int n,int arr[m][n]);
int main(){
	int m,n;
	printf("Enter Size of row: ");
	scanf("%d",&m);
	printf("Enter Size of cols: ");
		scanf("%d",&n);
	int arr[m][n];
	input(m,n,arr);
	printf("Enter data : \n");
	output(m,n,arr);
	printf("\n");
	int tot = sum(m,n,arr);
	printf("sum is : %d",tot);
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
int sum(int m,int n,int arr[m][n]){
	int sum = 0;
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			sum += arr[i][j];
		}
	}
	return sum;
}




