// 21) Write a C Program to calculate sum of all elements in 2D array.
// Enter value [1][1] : 1
// Enter value [1][2] : 1
// Enter value [1][3] : 1
// Enter value [2][1] : 1
// Enter value [2][2] : 1
// Enter value [2][3] : 1
// Enter value [3][1] : 1
// Enter value [3][2] : 1
// Enter value [3][3] : 1
// sum is : 9 
#include<stdio.h>
int main(){
    int arr[3][3],sum = 0;
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            printf("Enter value [%d][%d] : ",i+1,j+1);
            scanf("%d" , &arr[i][j]);
        }
    }
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            sum += arr[i][j];
        }
    }
    printf("sum is : %d ",sum);
    return 0;
}