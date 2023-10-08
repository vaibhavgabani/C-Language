// Enter Number : 5
// 543212345
//  4321234 
//   32123  
//    212   
//     1

#include <stdio.h>

int main() {
    int n,j;
    printf("Enter Number : ");
    scanf(" %d",&n);
    for(int i = n; i >= 1 ;i--){
        int k = i;
        for(j = 1;j<=n-i ; j++){
            printf(" ");
        }
        for(;j <= n ; j++){
            printf("%d",k);
            k--;
        }
        k=1;
        for(;j<n+i ; j++){
            k++;
            printf("%d",k);
        }
        for(;j<=2*n-1;j++){
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}