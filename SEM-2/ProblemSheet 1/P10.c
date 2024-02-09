/*
 * P10.c
 *
 *  Created on: 31-Jan-2024
 *      Author: root
 */
#include<stdio.h>
void input(int [],int);
void output(int [],int);
void sorta(int [],int);
void sortd(int [],int);
int main(){
	int size;
	printf("Enter Size : ");
	scanf("%d",&size);
	int arr[size];
	//input
	input(arr,size);
	//short A
	sorta(arr,size);
	printf("Shorting in ascending order :");
	output(arr,size);
	//short D
	sortd(arr,size);
	printf("Shorting in descending order :");
	output(arr,size);
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
void sorta(int arr[],int size){
	int temp;
	for(int i = 0 ; i  <size ; i++){
		for(int j = 0 ; j < size ; j++){
			if(arr[i] < arr[j]){
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	return;
}
void sortd(int arr[],int size){
	int temp;
	for(int i = 0 ; i  <size ; i++){
		for(int j = 0 ; j < size ; j++){
			if(arr[i] > arr[j]){
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	return;
}
