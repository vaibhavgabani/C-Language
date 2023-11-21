// Row and cols assanding.
// Enter Value [1][1] : 3
// Enter Value [1][2] : 2
// Enter Value [1][3] : 1
// Enter Value [2][1] : 3
// Enter Value [2][2] : 2
// Enter Value [2][3] : 1
// Enter Value [3][1] : 3
// Enter Value [3][2] : 2
// Enter Value [3][3] : 1
// 3 2 1
// 3 2 1
// 3 2 1
// Matrix shorting row wise : 
// 1 2 3
// 1 2 3
// 1 2 3
// Matrix shorting cols wise :
// 1 1 1
// 2 2 2
// 3 3 3


#include<stdio.h>
int main(){
    int r , c ,temp1 = 0,temp2 = 0;

    int arr1[3][3], arr2[3][3];
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            printf("Enter Value [%d][%d] : ",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
    }
    //COPY TO OTHER ARRYAY
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            arr2[i][j] = arr1[i][j];
        }
    }

    //row wise ass
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            for(int k = j+1 ; k < 3 ; k++){
                if(arr1[i][j]>arr1[i][k]){
                    temp1 = arr1[i][k];
                    arr1[i][k] = arr1[i][j];  
                    arr1[i][j] = temp1;
                }
            }
        }
        temp1 = 0;
    }
    //cols wise1
    for(int j = 0 ; j < 3 ; j++){
        for(int i = 0 ; i < 3 ; i++){
            for(int k = i+1 ; k < 3 ; k++){
                if(arr2[j][i]>arr2[j][k]){
                    temp2 = arr2[j][k];
                    arr2[j][k] = arr2[j][i];
                    arr2[j][i] = temp2;
                }
            }
        }
        temp2 = 0;
    }


    //output
    printf("Matrix shorting row wise : \n");
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            printf("%d " , arr1[i][j]);
        }
        printf("\n");
    }

    printf("Matrix shorting cols wise : \n");
    for(int j = 0 ; j < 3 ; j++){
        for(int i = 0 ; i < 3 ; i++){
            printf("%d " , arr2[i][j]);
        }
        printf("\n");
    }
    return 0 ;
}