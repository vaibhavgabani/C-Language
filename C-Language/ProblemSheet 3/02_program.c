// 2)	Write a C program to count prime numbers in an array of 10 integers.
// Enter number for 1 : 1
// Enter number for 2 : 2
// Enter number for 3 : 3
// Enter number for 4 : 4
// Enter number for 5 : 5
// Enter number for 6 : 6
// Enter number for 7 : 7
// Enter number for 8 : 8
// Enter number for 9 : 9
// Enter number for 10 : 0
// total prime number is 4
#include<stdio.h>
int main(){
    int arr[10],cnt = 0,tot = 0;
    //input
    for(int i = 0 ; i < 10 ; i++){
        printf("Enter number for %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    //logic
    for(int i = 0 ; i< 10 ; i++){
        for(int j = 1; j <= arr[i]; j++){
            if(arr[i] % j == 0){
                cnt++;
            }
        }
        if(cnt == 2){
           tot++;
        }
        cnt = 0;
    }
    printf("total prime number is %d",tot);
    return 0;
}