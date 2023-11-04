// 16) Write a C Program to find smallest element row wise and column wise in 2D array.
// Enter vale of [1][1] possiaction : 1
// Enter vale of [1][2] possiaction : 2
// Enter vale of [1][3] possiaction : 3
// Enter vale of [2][1] possiaction : 1
// Enter vale of [2][2] possiaction : 2
// Enter vale of [2][3] possiaction : 3
// Enter vale of [3][1] possiaction : 1
// Enter vale of [3][2] possiaction : 2
// Enter vale of [3][3] possiaction : 3
// row 1 ans is : 1
// row 2 ans is : 1
// row 3 ans is : 1
// c 1 is :1
// c 2 is :2
// c 3 is :3
#include<stdio.h>
int main(){
    int arr[3][3],small = 999999999;
    for(int i = 0 ; i < 3 ; i++){
        for (int j = 0 ; j < 3 ; j++){
            printf("Enter vale of [%d][%d] possiaction : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    //row wise 
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            if(small>arr[i][j]){
                small = arr[i][j];
            }
        }
        printf("row %d ans is : %d\n",i+1,small);
        small = 999999999;
    }
    //cols wise
    for(int j = 0 ; j < 3 ; j++){
        for (int i = 0 ; i < 3 ; i++){
            if(small>arr[i][j]){
                small = arr[i][j];
            }
        }
        printf("c %d is :%d \n",j+1,small);
        small = 999;
    }
    return 0;
}