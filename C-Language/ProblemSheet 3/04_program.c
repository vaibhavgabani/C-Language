// // 4)	Write a C program to reverse the integer array.
// Enter your array size : 5
// Enter number of 1 : 1
// Enter number of 2 : 2
// Enter number of 3 : 3
// Enter number of 4 : 4
// Enter number of 5 : 5
// In Reverce Form : 5 4 3 2 1
#include<stdio.h>
int main(){
    int n;
    printf("Enter your array size : ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        printf("Enter number of %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("In Reverce Form :");
    for(int j = n-1 ; j>=0 ; j--){
        printf(" %d",arr[j]);
    }
    return 0;
}