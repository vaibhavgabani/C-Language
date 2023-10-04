output is :-
Enter Number : 5
    *
   **
  ***
 ****
*****
#include<stdio.h>
int main(){
    int n = 5;
    printf("Enter Number : ");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j<= n; j++){
            if((i+j) <= n){
                printf(" ");
            } else {
                printf("*");
            }
        }
        printf("\n");
    }
}