#include<stdio.h>
int main(){
    int arr1[3][3],arr2[3][3],temp1 = 0, temp2 = 0;
    //input
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            printf("Enter data at [%d][%d] : ",i+1,j+1);
            scanf("%d",&arr1[i][j]);
            arr2[i][j] = arr1[i][j];
        }
    }
    //output of input
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            printf("%d\t", arr1[i][j]);
        }
        printf("\n");
    }
    //process & output
    for(int j = 0 ; j < 3 ; j ++){
        for(int i = 0 ; i < 3 ; i++){
           temp1 += arr1[i][j];
        }
        printf("%d cols total is : %d\n",j+1,temp1);
        temp1 = 0;
    }    
    return 0;
}