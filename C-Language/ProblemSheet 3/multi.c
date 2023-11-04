#include<stdio.h>
int main(){
    int n,tot = 0;
    int arr1[3][3] , arr2[3][3] , mul[3][3];
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            printf("Enter value [%d][%d] : ",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
    }
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            printf("Enter value [%d][%d] : ",i+1,j+1);
            scanf("%d",&arr2[i][j]);
        }
    }
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            for(int k = 0 ; k < 3 ; k++){
                tot+=arr1[i][k]*arr2[k][j];
                mul[i][j] = tot;
            }
            tot = 0;
        }
    }
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}