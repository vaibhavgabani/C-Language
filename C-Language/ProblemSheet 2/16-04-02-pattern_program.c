//           * 
//         * *
//       * * *
//     * * * *
//   * * * * *
// * * * * * *
//   * * * * *
//     * * * *
//       * * *
//         * *
//           *
#include<stdio.h>
int main(){
    int n = 5;
    for(int i = 0 ; i <= n ; i++){
        for(int j = 0 ; j <= n ; j++){
            if((i+j)>=n){
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    for(int a = 0 ; a <= n ; a++){
        for(int b = 0 ; b <= n ; b++){
            if(b>a){
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}