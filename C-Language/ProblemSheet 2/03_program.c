#include<stdio.h>
int main(){
    int n1,n2,cnt = 0;
    char choice;
    // do{

    // }while(choice == 'Y');
        up:
        up2:
        printf("\n Enter First Number : ");
        scanf("%d",&n1);
        printf("Enter Second Number : ");
        scanf("%d",&n2);
       
        if(n1<n2){
            printf("Enter valid number ");
            goto up;
        } else {
            while(n1 > 0){
            cnt++;
            n1 = n1 - n2;
        }

        printf("div is : %d",cnt);
        printf("\npress Y : Run Agiain");
        printf("\npress N : for stop\n");
        scanf("%d",&n1);
        scanf(" %c",&choice);
        if(choice == 'y'){
            // scanf("5d",&n1);
            goto up2;
        } else{
            goto end;
        }
        }
        end:
    return 0;
}