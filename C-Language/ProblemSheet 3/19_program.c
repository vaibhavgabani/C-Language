// 19) Write a C Program to calculate sum of all elements row wise in 2D array.
// Enter value for [1][1] : 1
// Enter value for [1][2] : 2
// Enter value for [1][3] : 3
// Enter value for [2][1] : 1
// Enter value for [2][2] : 2
// Enter value for [2][3] : 3
// Enter value for [3][1] : 1
// Enter value for [3][2] : 2
// Enter value for [3][3] : 3
// sum of 1 row is : 6
// sum of 2 row is : 6
// sum of 3 row is : 6
// sum of 1 row is : 3
// sum of 2 row is : 6
// sum of 3 row is : 9
#include<stdio.h>
int main(){
    int arr[3][3] , arr1[3],arr2[3], sum = 0;
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            printf("Enter value for [%d][%d] : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    // sum row wise
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0; j < 3 ; j++){
            sum += arr[i][j];
            arr1[i] = sum;
        }
        printf("sum of %d row is : %d\n",i+1,arr1[i]);
        sum = 0;
    }
    // sum cols wise
    for(int j = 0; j < 3 ; j++){
        for(int i = 0 ; i < 3 ; i++){
            sum+=arr[i][j];
            arr2[j] = sum;
        }
        printf("sum of %d row is : %d \n",j+1,arr2[j]);
        sum = 0;
    }
    return 0;
}