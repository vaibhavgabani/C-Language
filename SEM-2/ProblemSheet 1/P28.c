/*
 * p28.c
 *
 *  Created on: 09-Feb-2024
 *      Author: root
 */
#include<stdio.h>
int multiply(int x,int y){
	int product=0;
	if(y>0){
		return product=x+multiply(x,y-1);
	} else {
		return 0;
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