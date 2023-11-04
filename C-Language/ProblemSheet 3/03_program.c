// 3)	Write a C program to calculate sum of all elements of an array of 10 integers.
// Enter number of 1 :1
// Enter number of 2 :1
// Enter number of 3 :1
// Enter number of 4 :1
// Enter number of 5 :1
// Enter number of 6 :1
// Enter number of 7 :1
// Enter number of 8 :1
// Enter number of 9 :1
// Enter number of 10 :1
//  sum of array is : 10
#include<stdio.h>
int main(){
    int arr[10], sum = 0;
    for(int i = 0 ; i < 10 ; i++){
        printf("Enter number of %d :",i+1);
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    printf(" sum of array is : %d",sum);
    return 0;
}