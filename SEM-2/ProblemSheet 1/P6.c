/*
 * P6.c
 *
 *  Created on: 31-Jan-2024
 *      Author: root
 */
#include<stdio.h>
int sum(int);
int main(){
	int n;
	printf("Enter Number :");
	scanf(" %d",&n);

	int tot = sum(n);
	printf("Sum up of %d is : %d",n,tot);
	return 0;
}

int sum(int n){
	int temp = 0;
	while(n>0){
		int r = n % 10;
		temp += r;
		n = n / 10;
	}
	return temp;
}


