// Ques: Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed value by 10.
#include<stdio.h>
int  main(){
    int  n ;
    printf("Enter Number : ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        printf("Enter %d number :",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i < n ; i++){
        if(arr[i] % 2 != 0){
            arr[i] = arr[i] * arr[i];
            printf("\nmulti is %d is : %d ",i+1,arr[i]);
        } else {
            arr[i] = arr[i] + 10;
            printf("\nadd 10 %d is : %d ",i+1,arr[i]);
        }
    }
    return 0;
}