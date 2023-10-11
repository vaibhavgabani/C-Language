// print riverce array in c program.    
// Enter 1 Number : 1
// Enter 2 Number : 2
// Enter 3 Number : 3
// Enter 4 Number : 4
// Enter 5 Number : 5
// 5 4 3 2 1 
#include<stdio.h>
int main(){
    int arr[5];
    for(int i = 0 ; i< 5 ; i++){
        printf("Enter %d Number : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i = 4; i >= 0 ; i--){
        printf("%d ",arr[i]);
    }
    return 0;
}