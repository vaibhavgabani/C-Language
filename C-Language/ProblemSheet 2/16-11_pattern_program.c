// Enter Number : 5
// 1 2 3 4 5 
//   2 3 4 5 
//     3 4 5 
//       4 5 
//         5 
#include<stdio.h>
int main(){
    int n = 5;
    for(int i = 1 ; 1 <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            if(j>=i){
                printf("%d ",j);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}