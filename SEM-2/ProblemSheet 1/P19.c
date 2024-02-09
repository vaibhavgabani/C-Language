/*
 * P19.c
 *
 *  Created on: 01-Feb-2024
 *      Author: root
 */
/*
 * P18.c
 *
 *  Created on: 01-Feb-2024
 *      Author: root
 */
#include<stdio.h>
void fibonachi(int);
int main(){
	int n;
	printf("Enter Number :");
	scanf("%d",&n);
	printf("Fibonacci series :");
	fibonachi(n);
	return 0;
}
void fibonachi(int n){
	int a = 0;
	int b = 1;
	for(int i = 1 ; i <= n ; i++){
		printf("%d ",a);
		int c = a + b;
		a = b;
		b = c;
	}
}
