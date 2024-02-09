/*
 * P25.c
 *
 *  Created on: 02-Feb-2024
 *      Author: root
 */

#include<stdio.h>
void print(int);
int main(){
	int n;
	printf("Enter Row :");
	scanf("%d",&n);
	print(n);
	return 0;
}
void print(int n){
	int a = 0;
		for(int i = 1 ; i < n ; i++){
			int z = 1;
			for(int j = 0 ; j < n - i ; j++){
				printf("  ");
			}
			for(int k = 0 ; k <= a ; k++){
				printf("%d ",z);
				z++;
			}
			a = a + 2;
			printf("\n");
		}
		for(int i = 1 ; i <= n* 2 - 1; i++){
			printf("%d ",i);
		}
		printf("\n");
		return;
}

