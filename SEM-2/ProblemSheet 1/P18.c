/*
 * P18.c
 *
 *  Created on: 01-Feb-2024
 *      Author: root
 */
#include<stdio.h>
void input(int m,int n,int arr[m][n]);
void output(int m,int n ,int arr[m][n]);
int prime(int);
int arrprime(int m,int n ,int arr[m][n]);
int main(){
	int m,n;
	printf("Enter Size of row: ");
	scanf("%d",&m);
	printf("Enter Size of cols: ");
	scanf("%d",&n);
	int arr[m][n];
	input(m,n,arr);
	output(m,n,arr);
	int sum = arrprime(m,n,arr);
	printf("Total prime number is : %d",sum);
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
int arrprime(int m,int n ,int arr[m][n]){
	int tot = 0;
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			int a = prime(arr[i][j]);
			if(a == 1){
				tot++;
			}
		}
	}
	return tot;
}
