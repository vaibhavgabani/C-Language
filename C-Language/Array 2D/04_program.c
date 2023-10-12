// Find max and min value in all number of array.
// Enter Array Sixe :3
// Enter 1 Number : 1
// Enter 2 Number : 0
// Enter 3 Number : 3

//  max is  : 3
//  min is : 0
#include<stdio.h>
int main(){
    int n,min,max = 0;
    printf("Enter Array Sixe :");
    scanf("%d",&n); 
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        printf("Enter %d Number : ",i+1);
        scanf("%d",&arr[i]);
        if(max<arr[i]){
            max = arr[i];
        }
        if(min>arr[i]){
            min = arr[i];
        }
    }   
    printf("\n max is  : %d \n min is : %d" ,max,min);
    return 0;
}