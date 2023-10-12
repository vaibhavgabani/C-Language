// *Ques: Find the total number of pairs in the Array
// whose sum is equal to the given value x.
// Enter size of Array : 7
// Enter 1 Number : 1
// Enter 2 Number : 2
// Enter 3 Number : 3
// Enter 4 Number : 4
// Enter 5 Number : 5
// Enter 6 Number : 6
// Enter 7 Number : 7
// Enter Vamue of x : 12
// (5,7) (6,6) (7,5)  so total is : 3
#include <stdio.h>
int main(){
    int n,x,cnt;
    cnt = 0 ;
    printf("Enter size of Array : ");
    scanf("%d",&n);
    int arr2[n];
    int arr1[n];
    for(int i = 0 ; i < n ; i++){
        printf("Enter %d Number : ",i+1);
        scanf("%d",&arr1[i]);
    }
    printf("Enter Vamue of x : ");
    scanf("%d",&x);
    for(int i = 0 ; i <= n ; i++){
     for(int j = 0 ; j <= n ; j++){
        if(arr1[i] + arr1[j] == x){
            cnt++;
            printf("(%d,%d) ",arr1[i],arr1[j]);
        }
      }
    }
    printf(" so total is : %d",cnt);
    return 0;
}