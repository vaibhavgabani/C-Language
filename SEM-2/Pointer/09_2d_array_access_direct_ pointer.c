#include<stdio.h>
int main(){
//	int n = 2 , m = 2;
	int arr[5][2] = {
			1990,10,
			1991,20,
			1992,30,
			1993,40,
			1994,50
	};
	printf("\naccess row : (*arr[i]+1)\n");
	for(int i = 0 ; i < 5; i++){
		printf("address : %u address : %u value : %d \n",&arr[i]+1,arr[i]+1,*(arr[i])); // when we print [%d] single vlue it print address
	}
	printf("\naccess row : *(*(arr+i)+1))\n");
		for(int i = 0 ; i < 5; i++){
			printf("address : %u address : %u value : %d \n",&arr[i]+1,arr[i]+1,*(*(arr+i))); // when we print [%d] single vlue it print address
		}
	printf("\naccess inside row : *(arr[i]+1)\n");
	for(int i = 0 ; i < 5; i++){
		printf("address : %u address : %u value : %d \n",&arr[i]+1,arr[i]+1,*(arr[i]+1)); // when we print [%d] single vlue it print address
	}
	printf("\naccess inside row : *(*(arr+i)+1)\n");
	for(int i = 0 ; i < 5; i++){
		printf("address : %u address : %u value : %d \n",&arr[i]+1,arr[i]+1,*(*(arr+i)+1)); // when we print [%d] single vlue it print address
	}
	return 0;
}


