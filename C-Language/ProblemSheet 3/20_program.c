// 20) Write a C Program to calculate sum of all elements column wise in 2D array.
// Enter value for [1][1] : 1
// Enter value for [1][2] : 1
// Enter value for [1][3] : 1
// Enter value for [2][1] : 1
// Enter value for [2][2] : 1
// Enter value for [2][3] : 1
// Enter value for [3][1] : 1
// Enter value for [3][2] : 1
// Enter value for [3][3] : 1
// sum of 1 col is : 3 
// sum of 2 col is : 3
// sum of 3 col is : 3

#include<stdio.h>
int main(){
    int arr[3][3] , arr1[3], sum = 0;
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            printf("Enter value for [%d][%d] : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    // sum cols wise
    for(int j = 0; j < 3 ; j++){
        for(int i = 0 ; i < 3 ; i++){
            sum += arr[i][j];
            arr1[j] = sum;
        }
        printf("sum of %d col is : %d \n",j+1,arr1[j]);
        sum = 0;
    }
    return 0;
}