// Fimd 2 largest Element in array.
// Enter size of Array : 4
// Enter 1 Number : 12
// Enter 2 Number : 456
// Enter 3 Number : 8
// Enter 4 Number : 1

//  1 Largest is : 456
//  2 Largest is : 12
#include <stdio.h>
int main(){
    int n,largest1,largest2;
    largest1 = 0 ;
    largest2 = 0 ;
    printf("Enter size of Array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        printf("Enter %d Number : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i < n ; i++){
        if(largest1 < arr[i]){
            largest2 = largest1;
            largest1 = arr[i]; 
        } else if (largest2 < arr[i]){
            largest2 = arr[i];
        }
    }
    printf("\n 1 Largest is : %d ",largest1);
    printf("\n 2 Largest is : %d ",largest2);
    return 0;
}