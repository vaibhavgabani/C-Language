#include<stdio.h>
int main(){
    int num = 0,counter = 0;
    char choice;
    do{
        printf("Enter Number : ");
        scanf("%d",&num);
        for(int i = 1 ; i<= num ; i++ ){
            if(num % i == 0){
                counter++;
            }
        }
        if(counter == 2){
            printf("Prime Number.");
        } else {
            printf("Not A prime Number.");
        }
        printf("\nPRESS Y = Run Again");
        printf("\nPRESS N = Stop\n");
        scanf("%d",&num);
        scanf("%c",&choice);
    }while(choice == 'Y'  || choice == 'y');
    return 0;
}