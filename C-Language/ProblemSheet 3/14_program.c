// // 14) Write a C Program to perform following matrix operation on a   2D array (4 X 3) Addition, Subtraction, Multiplication, Transpos
// Enter value for 1 array
// Enter value [1][1] : 2
// Enter value [1][2] : 2
// Enter value [1][3] : 2
// Enter value [2][1] : 2
// Enter value [2][2] : 2
// Enter value [2][3] : 2
// Enter value [3][1] : 2
// Enter value [3][2] : 2
// Enter value [3][3] : 2
// Enter value for 2 array
// Enter value [1][1] : 2
// Enter value [1][2] : 2
// Enter value [1][3] : 2
// Enter value [2][1] : 2
// Enter value [2][2] : 2
// Enter value [2][3] : 2
// Enter value [3][1] : 2
// Enter value [3][2] : 2
// Enter value [3][3] : 2

// multiplaction :
//  12 12 12
//  12 12 12
//  12 12 12
// addaction :
//  4 4 4
//  4 4 4
//  4 4 4
// sub :
//  0 0 0
//  0 0 0
//  0 0 0
// transform of 1 :
//  2 2 2
//  2 2 2
//  2 2 2
// transform of 2 :
//  2 2 2
//  2 2 2
//  2 2 2
#include<stdio.h>
int main(){
    int arr1[3][3] , arr2[3][3] , sum = 0 , mul[3][3], add[3][3],sub[3][3];
    //input for 1 array
    printf("Enter value for 1 array\n");
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            printf("Enter value [%d][%d] : ",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
    }
    //array for 2 array
    printf("Enter value for 2 array\n");
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            printf("Enter value [%d][%d] : ",i+1,j+1);
            scanf("%d",&arr2[i][j]);
        }
    }
    //main logic
    //mul
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            for(int k = 0 ; k < 3 ; k++){
                sum += arr1[i][k] * arr2[k][j];
                mul[i][j] = sum;
            }
            sum = 0;
        }
    }
    //add
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            add[i][j] = arr1[i][j]+arr2[i][j];
        }
        printf("\n");
    }
    //sub
     for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            sub[i][j] = arr1[i][j]-arr2[i][j];
        }
        printf("\n");
    }
    //output
    //mutli
    printf("multiplaction : \n");
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            printf(" %d",mul[i][j]);
        }
        printf("\n");
    }
    //add
    printf("addaction : \n");
     for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            printf(" %d",add[i][j]);
        }
        printf("\n");
    }
    //sub
    printf("sub : \n");
     for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            printf(" %d",sub[i][j]);
        }
        printf("\n");
    }
     //tranform
    //1
    printf("transform of 1 : \n");
    for(int j = 0 ; j < 3 ; j++){
        for(int i = 0 ; i < 3 ; i++){
            printf(" %d",arr1[i][j]);
        }
        printf("\n");
    }
    //2
    printf("transform of 2 : \n");
    for(int j = 0 ; j < 3 ; j++){
        for(int i = 0 ; i < 3 ; i++){
            printf(" %d",arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}