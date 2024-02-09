/*
 * P12.c
 *
 *  Created on: 01-Feb-2024
 *      Author: root
 */
/*
 * P10.c
 *
 *  Created on: 31-Jan-2024
 *      Author: root
 */
#include<stdio.h>
void input(int [],int);
void output(int [],int);
int large(int [],int);
int small(int [],int);
int main(){
	int size;
	printf("Enter Size : ");
	scanf("%d",&size);
	int arr[size];
	//input
	input(arr,size);

	int l = large(arr,size);
	printf("Largest is : %d\n",l);
	int s = small(arr,size);
	printf("Smallest is : %d",s);
return 0;
}
void input(int arr[],int size){
	for(int i = 0 ; i  <size ; i++){
		printf("Enter value at [%d] :",i+1);
		scanf("%d",&arr[i]);
	}
	return;
}
void output(int arr[],int size){
	for(int i = 0 ; i  <size ; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	return;
}
int large(int arr[],int size){
	int temp = -999999999;
	for(int i = 0 ; i < size ; i++){
		if(temp < arr[i]){
			temp = arr[i];
		}
	}
	return temp;
}

int small(int arr[],int size){
	int temp = 999999999;
	for(int i = 0 ; i < size ; i++){
		if(temp > arr[i]){
			temp = arr[i];
		}
	}
	return temp;
}

