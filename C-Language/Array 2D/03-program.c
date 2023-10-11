// Q3: Calculate sum of all array.
// Ans :
// Enter Number you have to sum : 2

// Enter 1 Num : 12

// Enter 2 Num : 12

// Sum is : 24
// code :- 
#include<stdio.h>
int main(){
    int n,sum = 0;
    printf("Enter Number you have to sum : ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        printf("\nEnter %d Num : ",i+1);
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    printf("\nSum is : %d",sum);
   return 0; 
}