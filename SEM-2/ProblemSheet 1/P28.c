/*
 * p28.c
 *
 *  Created on: 09-Feb-2024
 *      Author: root
 */
#include<stdio.h>
int multiply(int x,int y){
	if(y<=0){
		return 0;
	} else {
		return x + multiply(x, y - 1);;
	}
}
void main(){
	int a,b;
	printf("var1:");
	scanf("%d",&a);
	printf("var2:");
	scanf("%d",&b);
	printf("product=%d",multiply(a,b));
}