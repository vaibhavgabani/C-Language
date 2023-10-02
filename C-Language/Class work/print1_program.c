// Output of program:
//     * 
//    * *
//   * * *
//  * * * *
// * * * * *


#include<stdio.h>
int main(){
    int row;
    printf("Enter Row\n");
    scanf("%d",&row);

    for(int i = 1 ; i <= row ; i++){
        for(int s = 1 ; s<=(row-i) ; s++){
            printf(" ");
        }
        for(int j = 1 ; j <= i ; j++){
            printf("* ");
        }
        printf("\n");
    }
}