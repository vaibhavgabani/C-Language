#include<stdio.h>
int main(){
   
    FILE *fptr;
 
    int n = 5;
    int arr[n];

    for(int i = 0 ; i < n ; i++){
        printf("Enter at [%d] : ",i+1);
        scanf("%d",&arr[i]);
    }
    
    fptr = fopen("05-file.txt","a");
    for(int i = 0 ; i < n ; i++){
        putw(arr[i],fptr);
    }
    fclose(fptr);


    //print
    fptr = fopen("05-file.txt","r");
    
    // methord 1
    // for(int i = 0 ; i < n ; i++){
    //     arr[i] = getw(fptr);
    // }
    // for(int i = 0 ; i < n ; i++){
    //     printf("%d ",arr[i]);
    // }

    //methord 2
    // for(int i = 0 ; (arr[i] = getw(fptr)) != EOF ; i++){
    //     printf("%d ",arr[i]);
    // }

    // methord 3
    int i = 0 ;
    while((arr[i] = getw(fptr)) != EOF){
        printf("%d ",arr[i]);
        i++;
    }
    
    fclose(fptr);

    return 0;
}