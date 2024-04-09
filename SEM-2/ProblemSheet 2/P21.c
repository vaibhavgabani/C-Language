#include<stdio.h>
int main(int argc , char const *argv[]){
    if(argc != 11){
        printf("Enter valid Argument.");
    } else {
        int arr[10];
        for(int i = 0 ; i < 10 ; i++){
            arr[i] = atoi(argv[i+1]);
        }
        printf("sorted data : ");
        for(int i = 0 ; i < 10 ; i++){
            for(int j = 0 ; j < 10 ; j++){
                if(arr[i] < arr[j]){
                    int temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
        }
        for(int i = 0 ; i < 10 ; i++){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}