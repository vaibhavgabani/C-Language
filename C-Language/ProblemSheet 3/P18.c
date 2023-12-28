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
    //row wise accemding 
    //cols wise shorting in Accemding order
    for(int j = 0 ; j < 3 ; j++){
        for(int i = 0 ; i < 3 ; i++){
            for(int k = 0 ; k < 3 ; k++){
                if(arr1[j][i] < arr1[k][i]){
                    temp1 = arr1[k][i];
                    arr1[k][i] = arr1[j][i];
                    arr1[j][i] = temp1;
                }
            }
        }
        temp1 = 0;
    }
    //row wise shorting in Decending order
    for(int j = 0 ; j < 3 ; j++){
        for(int i = 0 ; i < 3 ; i++){
            for(int k = 0 ; k < 3 ; k++){
                if(arr2[j][i] > arr2[k][i]){
                    temp2 = arr2[k][i];
                    arr2[k][i] = arr2[j][i];
                    arr2[j][i] = temp2;
                }
            }
        }
        temp2 = 0;
    }

    //output 
    //Accending form
    printf("cols wise shorting in Accending form : \n");
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
        printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }
    //Accending form
    printf("cols wise shorting in Decending form : \n");
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
        printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}