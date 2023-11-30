#include<stdio.h>
int main(){
    int arr1[3][3],arr2[3][3],sum = 0;
    //input
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            printf("Enter data at [%d][%d] : ",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
    }
    //process
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            sum +=arr1[i][j];
        }
    }

    //output of input
    printf("sum is : %d",sum);
    return 0;
}