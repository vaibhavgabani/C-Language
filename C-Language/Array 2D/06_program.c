// Ques: Count the number of elements in given array
// greater than a given number x.
#include <stdio.h>
int main(){
    int n,x,cnt;
    cnt = 0;
    printf("Enter size of Array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        printf("Enter %d Number : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter number of  x : ");
    scanf("%d",&x);

    for(int i = 0 ; i < n ; i++){
        if(arr[i]>=x)cnt++;
    }
    printf("toal large number upto %d is : %d",x,cnt);
    return 0;
}