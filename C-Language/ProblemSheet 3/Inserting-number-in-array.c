#include<stdio.h>
int main(){
    int size,posicaction,value;
    printf("Enter size of array : ");
    scanf("%d",&size);
    int arr[size];
    //input
    for(int i = 0 ; i < size ; i++){
        printf("Enter value at [%d] pissicaction : ",i+1);
        scanf("%d",&arr[i]);
    }
    //input of insering possicaction and number
    printf("Enter posicaction where you have to add number :");
    scanf("%d",&posicaction);
    printf("Enter value :");
    scanf("%d",&value);
    
    posicaction = posicaction - 1;
    
    //process of transfereing 
    for(int i = size ; i >= posicaction ; i--){
        arr[i] = arr[i-1];
    }
    arr[posicaction] = value;
    size++;

    //output
    
    for(int i = 0 ; i < size ; i ++){
        printf("[%d] possicaction value is : %d \n",i+1,arr[i]);
    }

    return 0;
}