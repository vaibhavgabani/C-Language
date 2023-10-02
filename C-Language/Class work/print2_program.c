// Output :
// Enter Number of raw : 5
//     *
//    ***
//   *****
//  *******
// *********

#include<stdio.h>
int main(){
    int rows;
    char choice;
    start:
    printf("Enter Number of raw : ");
    scanf("%d",&rows);
    for(int i = 1 ; i <= rows ; i++){
        for(int s = 1 ; s<= rows-i ; s++){
            printf(" ");
        }
        for(int j = 1 ; j <= 2*i-1 ; j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\nEnter Y : run again\n");
    printf("Enter N : stop\n");
    scanf(" %c",&choice);
    if(choice == 'Y' || choice == 'y'){
        goto start;
    } else {
        goto end;
    }
    end:
    return 0;
}