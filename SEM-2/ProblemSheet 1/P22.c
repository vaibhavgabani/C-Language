/*
 * P22.c
 *
 *  Created on: 01-Feb-2024
 *      Author: root
 */
#include<stdio.h>
int prime(int);
int main(){
	int n;
	printf("Enter Number :");
	scanf("%d",&n);
	int total = prime(n);
	if(total == 1){
		printf("Enter number is prime.\n");
	} else {
		printf("Enter number is not prime.\n");
	}
	return 0;
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


