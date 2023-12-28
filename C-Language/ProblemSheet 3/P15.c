#include<stdio.h>
int main(){
    int arr1[3][3],largest = -99999999;
    //input
    printf("Enter value of 1 Array : \n");
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
        printf("Enter value at [%d][%d] : ",i+1,j+1);
        scanf("%d",&arr1[i][j]);
        }
    }
    //printing input
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
        printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }
    //process
    //row wise
    printf("largest row wise : \n");
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            if(largest < arr1[i][j]){
                largest = arr1[i][j];
            }
        }
        printf("%d row largest amount is :%d \n",i+1,largest);
        largest = -99999999;
    }
    //row wise
    printf("largest row wise : \n");
    for(int j = 0 ; j < 3 ; j++){
        for(int i = 0 ; i < 3 ; i++){
            if(largest < arr1[i][j]){
                largest = arr1[i][j];
            }
        }
        printf("%d cols largest amount is :%d \n",j+1,largest);
        largest = -99999999;
    }
    return 0;
}