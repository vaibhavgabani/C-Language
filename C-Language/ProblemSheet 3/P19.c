#include<stdio.h>
int main(){
    int arr1[3][3],sum = 0;
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
    //process & output
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
        sum += arr1[i][j];
        }
        printf("%d row sum is : %d\n",i+1,sum);
        sum = 0;
    }
    return 0;
}