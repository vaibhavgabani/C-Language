// Ques: Find the difference between the sum of elements at even indices to the sum of elements at odd indices.
// Enter size of Array : 4
// Enter 1 Number : 1
// Enter 2 Number : 2
// Enter 3 Number : 3
// Enter 4 Number : 4
// odd is :  6 
// odd is :  4
// Different is :  2
#include <stdio.h>
int main(){
    int n,x,cnt,odd,even;
    odd = 0;
    even = 0;
    printf("Enter size of Array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        printf("Enter %d Number : ",i+1);
        scanf("%d",&arr[i]);
    }

    for(int i = 0 ; i < n ; i++){
        if(arr[i]%2==0){
            even = even + arr[i]; 
        } else {
            odd  = odd + arr[i];
        }
    }
    int difference = even - odd;
    printf("odd is :  %d ",even);
    printf("\nodd is :  %d ",odd);
    printf("\nDifferent is :  %d ",difference);
    return 0;
}