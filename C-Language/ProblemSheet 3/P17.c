#include<stdio.h>
int main(){
    int arr1[3][3],arr2[3][3],temp1 = 0,temp2 = 0;
    //input
    printf("Enter value of 1 Array : \n");
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
        printf("Enter value at [%d][%d] : ",i+1,j+1);
        scanf("%d",&arr1[i][j]);
        arr2[i][j] = arr1[i][j];
        }
    }
    //printing input
    printf("Data Enter by you : \n");
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
        printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }

    //process
    //row wise shorting in Accemding order
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            for(int k = 0 ; k < 3 ; k++){
                if(arr1[i][j] < arr1[i][k]){
                    temp1 = arr1[i][k];
                    arr1[i][k] = arr1[i][j];
                    arr1[i][j] = temp1;
                }
            }
        }
        temp1 = 0;
    }
    //cols wise shorting in Decanding order
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            for(int k = 0 ; k < 3 ; k++){
                if(arr2[i][j] > arr2[i][k]){
                    temp2 = arr2[i][k];
                    arr2[i][k] = arr2[i][j];
                    arr2[i][j] = temp2;
                }
            }
        }
        temp2 = 0;
    }

    //output
    //rows wise
    printf("row wise shorting in Accending : \n");
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }
    //cols wise
    printf("cols wise shorting in Decanding : \n");
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
