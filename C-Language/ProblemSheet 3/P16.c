#include<stdio.h>
int main(){
    int arr1[3][3],smallest = 9999999;
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
    printf("Smalest amunt row wise is : \n");
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            if(smallest > arr1[i][j]){
                smallest = arr1[i][j];
            }
        }
        printf("%d row smallest amount is : %d\n",i+1,smallest);
        smallest = 999999999;
    }
    //cols wise
    printf("Smalest amunt cols wise is : \n");
    for(int j = 0 ; j < 3 ; j++){
        for(int i = 0 ; i < 3 ; i++){
            if(smallest > arr1[i][j]){
                smallest = arr1[i][j];
            }
        }
        printf("%d row smallest amount is : %d\n",j+1,smallest);
        smallest = 999999999;
    }
    return 0;
}