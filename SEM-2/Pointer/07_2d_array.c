#include<stdio.h>
int main(){
    int arr[3][3] = {
            {1,2,3},
            {4,5,6},
            {7,8,9}
    };
    int *p;
    p = &arr[0][0];
    //input
     for(int i = 0 ; i < 3 ; i++){
         printf("%d ",*(p+i));
     }
     //print
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            printf("arr[%d] address = %u value = %d \n",i,&arr[i][j],arr[i][j]);
        }
    }
    // for(int i = 0 ; i < 3 ; i++){
    //     for(int j = 0 ; j < 3 ; j++){
    //         printf("%d ",arr[i][j]);
    //     }
    //     printf("\n");
    // }
    return 0;
}
