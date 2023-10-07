// Enter Number :5
// 5 4 3 2 1 
//   4 3 2 1
//     3 2 1
//       2 1
//         1
#include<stdio.h>
int main(){
    int n;
    printf("Enter Number :");
    scanf("%d",&n);
    for(int i = n ; i >= 1 ; i--){
        for(int j = n ; j >=1 ; j--){
            if(j<=i){
                printf("%d ",j);
            } else {
                printf("  ");
            }
            
        }
        printf("\n");
    }
    return 0;
}