#include<stdio.h>
int main(){
    int num,possicaction;
    printf("Enter size of array :");
    scanf("%d",&num);
    int arr[num];
    //input
    for(int i = 0 ; i < num ; i++){
        printf("Enter value at [%d] possicaction : ",i+1);
        scanf("%d",&arr[i]);
    }
    //possicaction enter by user
    printf("Enter possicaction which you want to delete : ");
    scanf("%d",&possicaction);

    //process
    for(int i = possicaction-1 ; i< num ; i++){
        arr[i] = arr[i+1];
    }

    //output  
    for(int i = 0 ; i < num-1 ; i++){
        printf("%d\t",arr[i]);
    }

    return 0;
}