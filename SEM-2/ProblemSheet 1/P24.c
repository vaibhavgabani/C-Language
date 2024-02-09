/*
 * P24.c
 *
 *  Created on: 02-Feb-2024
 *      Author: root
 */
#include<stdio.h>
void input(int [],int);
void output(int [],int);
void sorta(int [],int);
void merge(int [],int ,int [],int,int [],int);
int main(){
	int size1,size2;
	printf("Enter Size of 1 Array : ");
	scanf("%d",&size1);
	printf("Enter Size of 1 Array : ");
	scanf("%d",&size2);
	int size3 = size1 + size2;
	int arr1[size1],arr2[size2],arr3[size3];

	//input
	//1 array
	input(arr1,size1);
	//2 array
	input(arr2,size2);

	//output
	//1
	printf("\nData you enter in 1 Array:\n");
	output(arr1,size1);
	//2
	printf("\nData you enter in 2 Array:\n");
	output(arr2,size2);

	//short
	//in 1
	sorta(arr1,size1);
	printf("\n1 Shorted array : ");
	output(arr1,size1);
	//in 2
	sorta(arr2,size2);
	printf("\n1 Shorted array : ");
	output(arr2,size2);

	//mearge tow array
	printf("\nMearged Array : ");
	merge(arr1,size1,arr2,size2,arr3,size3);
	output(arr3,size3);
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
void merge(int arr1[],int size1,int arr2[],int size2, int arr3[],int size3){
	int z = 0;
	for(int i = 0 ; i < size1 ; i++){
		arr3[z] = arr1[i];
		z++;
	}
	for(int i = 0 ; i < size1 ; i++){
			arr3[z] = arr2[i];
			z++;
		}
}

