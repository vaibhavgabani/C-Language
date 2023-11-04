#include<stdio.h>
int main(){
    int arr[3][3],max = -9999999;
    //input
    for(int i = 0; i < 3 ; i++){
        for(int j = 0; j < 3 ; j++){
            printf("Enter value for [%d][%d] : ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    //process
    for(int i = 0; i < 3 ; i++){
        for(int j = 0; j < 3 ; j++){
            if(max<arr[i][j]){
                max = arr[i][j];
            }
        }
        printf("%d rows largest element is :%d\n",i+1,max);
        max = -9999999;
    }

    return 0;
}