/*
 * P26.c
 *
 *  Created on: 07-Feb-2024
 *      Author: root
 */
#include<stdio.h>
int fact(int);
int main(){
	int num ;

	printf("Enter Number :");
	scanf("%d",&num);

	int ans = fact(num);

	printf("fact is :%d\n",ans);

	return 0;
}
int fact(int n){
	if(n == 1){
		return 1;
	} else {
		n = n*fact(n-1);
		return n;
	}
}
