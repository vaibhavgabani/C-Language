/*
 * P5.c
 *
 *  Created on: 31-Jan-2024
 *      Author: root
 */
#include<stdio.h>
int leap(int);
int main(){
	int year;
	printf("Enter year :");
	scanf("%d",&year);
	int temp = leap(year);
	if(temp == 0){
		printf("%d is leap year.\n",year);
	} else {
		printf("%d is not leap year.\n",year);
	}
	return 0;
}
int leap(int n){
	if(n % 4  == 0){
		return 0;
	} else {
		return 1;
	}
}

