#include<stdio.h>
int main(){
	int arr[5],*ptr;
	ptr = arr;
	//input
	for(int i = 0 ; i < 5 ; i++){
		printf("Enter at [%d] : ",i);
		scanf("%d",&arr[i]);
	}
	for(int i = 0 ; i < 5 ; i++){
		printf("Enter at [%d] : ",i);
		scanf("%d",&*ptr + i);	// ptr and &*ptr are same
	}
	//output
	printf("\nAcess array with direct array :\n");
	for(int i = 0 ; i < 5 ; i++){
		printf("arr[%d] address = %u value = %d\n",i,&arr[i],arr[i]);
	}
	printf("\nAcess array with direct pointer :\n");
	for(int i = 0 ; i < 5 ; i++){
		printf("pointer address = %u value = %d\n",ptr,*ptr);
		ptr++;
	}
	return 0;
}


