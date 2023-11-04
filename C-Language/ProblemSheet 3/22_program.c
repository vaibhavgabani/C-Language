// 22) Write a C Program to delete specific element from an array. 
// Enter array size : 5
// Enter [1] Number :1
// Enter [2] Number :2
// Enter [3] Number :3
// Enter [4] Number :4
// Enter [5] Number :5
// Enter array positation which delete : 3
//  1 2 4 5
#include<stdio.h>
int main(){
    int n,p;
    printf("Enter array size : ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        printf("Enter [%d] Number :",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter array positation which delete : ");
    scanf("%d",&p);
    if(p < 0 || p > n){
        printf("Enter valid number \n");
    } else {
        for(int i = p-1 ; i < n-1 ; i++){
        arr[i] = arr[i+1];
        }
        for(int i = 0 ; i < n-1 ; i++){
        printf(" %d",arr[i]);
        }    
    }
    
    return 0;
}