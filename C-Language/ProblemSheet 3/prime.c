#include<stdio.h>
int main(){
    int n,cnt=0;
    printf("\nEnter size of array :");
    scanf("%d",&n);
    int arr[n];
    //input
    for(int i = 0 ; i < n ;i++){
        printf("Enter number of %d :",i+1);
        scanf("%d",&arr[i]);
    }
    //logic 
    for(int i = 0 ; i < n ; i++){
        for(int j = 1 ; j <= arr[i];j++){
           if(arr[i] % j == 0){
               cnt++;
           }
        }
        if(cnt == 2){
            printf("\nPrime number is :%d",arr[i]);
        }
        cnt = 0;
    }
    return 0;
}