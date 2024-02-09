/*
 * P9.c
 *
 *  Created on: 31-Jan-2024
 *      Author: root
 */
#include<stdio.h>
int factor(int);
int main(){
	int n;
	printf("Enter number :");
	scanf("%d",&n);
	int fact = factor(n);
	printf("Factor of %d is : %d \n",n,fact);
	return 0;
}
int factor(int n){
	int fac = 1;
	for(int i = 1 ; i <= n ; i++){
		fac = fac * i;
	}
	return fac;
}

