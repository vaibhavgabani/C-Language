#include<stdio.h>
int main(){
    int num;
    printf("Enter number :");
    scanf("%d",&num);
    for(int i = 1 ; i <= num ; i++){
        int a = 65;
        int b = 1;
        for(int s = 1 ; s <= num - i ; s++){
            printf("  ");
        }
        for(int j = 1 ; j < i ; j++){
            printf("%c ",a);
            a++;
            b++;
        }
        for(int k = b ; k >= 1 ; k--){
            printf("%c ",a);
            a--;
        }
        printf("\n");
    }
    return 0;
}