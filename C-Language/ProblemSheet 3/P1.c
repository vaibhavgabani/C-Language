// 1) Write a C program to sort an array of 20 integers
#include<stdio.h>
int main(){
    int num, temp = 0 , temp2 = 0;
    printf("Enter size of array : ");
    scanf("%d",&num);
    int arr[num];
    int arr2[num];
    //input
    for(int i = 0 ; i < num ; i++){
        printf("Enter value at [%d] : ",i+1);
        scanf("%d",&arr[i]);
        arr2[i] = arr[i];
    }
    //process
    //decending
    for(int i = 0 ; i < num ; i++){
        for(int j = 0 ; j < num ; j++){
            if(arr[i] > arr[j]){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    //accenidng
    for(int i = 0 ; i < num ; i++){
        for(int j = 0; j < num ; j++){
            if(arr2[i]< arr2[j]){
                temp2 = arr2[j];
                arr2[j] = arr2[i];
                arr2[i] = temp2; 
            }
        }
    }
    //output
    //Decending
    printf("\n Shorting in Decending order : ");
    for(int i = 0 ; i < num ; i++){
        printf("%d ",arr[i]);
    }
    //Accending
    printf("\n Shorting in Accending order : ");
    for(int i = 0 ; i < num ; i++){
        printf("%d ",arr2[i]);
    }
    return 0;
}