// 15) Write a C Program to find largest element row wise and column wise in 2D array.
// Enter Value for [1][1] : 1
// Enter Value for [1][2] : 2
// Enter Value for [1][3] : 3
// Enter Value for [2][1] : 4
// Enter Value for [2][2] : 5
// Enter Value for [2][3] : 6
// Enter Value for [3][1] : 7
// Enter Value for [3][2] : 8
// Enter Value for [3][3] : 9
// largest amount row wise :
// 1 rows ans is :3
// 2 rows ans is :6
// 3 rows ans is :9
// largest amount cols wise :
// 1 cols ans is : 7
// 2 cols ans is : 8
// 3 cols ans is : 9

#include<stdio.h>
int main(){
    int arr[3][3],max = -99999999;
    //input
    for(int i = 0; i< 3; i++){
        for(int j = 0 ; j< 3 ;j++){
            printf("Enter Value for [%d][%d] : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    //process fo  cols wise
    printf("largest amount row wise :\n");
    for(int i = 0; i< 3; i++){
        for(int j = 0 ; j< 3 ;j++){
            if(max < arr[i][j]){
                max = arr[i][j];
            }
        }
        printf("%d rows ans is :%d \n",i+1,max);
       max = -99999999;
    }
    //process for cols wise
    printf("largest amount cols wise :\n");
    for(int j = 0 ; j < 3 ; j++){
        for(int i = 0; i < 3 ;i++){
            if(max<arr[i][j]){
                max = arr[i][j];
            }
        }
        printf("%d cols ans is : %d\n",j+1,max);
        max = -99999999;
    }
    return 0;
}