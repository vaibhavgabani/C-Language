/*
 * P13.c
 *
 *  Created on: 01-Feb-2024
 *      Author: root
 */
/*
 * P11.c
 *
 *  Created on: 31-Jan-2024
 *      Author: root
 */
#include<stdio.h>
void input(int m,int n,int arr[m][n]);
void output(int m,int n ,int arr[m][n]);
int large(int m,int n,int arr[m][n]);
int small(int m,int n,int arr[m][n]);
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
	int l = large(m,n,arr);
	printf("Largest is :%d\n",l);
	int s = small(m,n,arr);
	printf("Small is :%d",s);
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
int large(int m,int n,int arr[m][n]){
	int large = -999999999;
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			if(large < arr[i][j]){
				large = arr[i][j];
			}
		}
	}
	return large;
}
int small(int m,int n,int arr[m][n]){
	int small = 999999999;
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			if(small > arr[i][j]){
				small = arr[i][j];
			}
		}
	}
	return small;
}

