#include<stdio.h>
#include<stdlib.h>

void printmain();
void printodd();
void printeven();

int main() {
    FILE *fptr, *fodd, *feven;
    int n = 0;
    //input
    fptr = fopen("master.dat", "w");
    for(int i = 0 ; i < 10 ; i++){
        printf("Enter value at %d: ",i+1);
        scanf("%d",&n);
        putw(n,fptr);
    }
    fclose(fptr);
    
    fptr = fopen("master.dat","r");
    fodd = fopen("odd.dat","w");
    feven = fopen("even.dat","w");
    while((n = getw(fptr)) != EOF){
        if(n % 2 == 0){
            putw(n,feven);
        } else {
            putw(n,fodd);
        }
    }
    fclose(fptr);
    fclose(fodd);
    fclose(feven);
    
    //print value inside file
    printf("\nData Inside main file : ");
    printmain();
    printf("\nData Inside odd file : ");
    printodd();
    printf("\nData Inside even file : ");
    printeven();
    return 0;
}
void printmain(){
    FILE *fptr;
    int n;
    fptr = fopen("master.dat","r");
    while((n = getw(fptr))!= EOF){
        printf("%d ",n);
    }
    fclose(fptr);
    return;
}

void printodd(){
    FILE *fptr;
    int n;
    fptr = fopen("odd.dat","r");
    while((n = getw(fptr))!= EOF){
        printf("%d ",n);
    }
    fclose(fptr);
    return;
}

void printeven(){
    FILE *fptr;
    int n;
    fptr = fopen("even.dat","r");
    while((n = getw(fptr))!= EOF){
        printf("%d ",n);
    }
    fclose(fptr);
    return;
}