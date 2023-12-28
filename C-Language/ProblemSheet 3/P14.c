#include<stdio.h>
int main(){
    int arr1[3][3],arr2[3][3],mul[3][3],add[3][3],sub[3][3];
    int sum = 0;
    //input
    printf("Enter value of 1 Array : \n");
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
        printf("Enter value at [%d][%d] : ",i+1,j+1);
        scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter value of 2 Array : \n");
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
        printf("Enter value at [%d][%d] : ",i+1,j+1);
        scanf("%d",&arr2[i][j]);
        }
    }


    //process
    //multiplaction
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            for(int k = 0 ; k < 3 ; k++){
                sum += arr1[i][k] * arr2[k][j];
                mul[i][j] = sum;
            }
            sum = 0;
        }
    }
    //addaction
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            add[i][j] = arr1[i][j]+arr2[i][j];
        }
    }
    //substraction
     for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            sub[i][j] = arr1[i][j] - arr2[i][j];
        }
    }

    //output
    //multiplaction
    printf("multiplaction is : \n");
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }
    //addaction
    printf("Addaction is : \n");
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            printf("%d\t",add[i][j]);
        }
        printf("\n");
    }
    //substraction
    printf("substraction is : \n");
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            printf("%d\t",sub[i][j]);
        }
        printf("\n");
    }
    return 0;
}