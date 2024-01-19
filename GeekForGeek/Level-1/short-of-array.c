#include<stdio.h>
void shorting(int arr[],int n){
    for(int i = 0 ; i < n ; i++){
        for(int j  = 0 ; j < n ; j++){
            if(arr[i]<arr[j]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    shorting(arr,n);
    printf("shoring : ");
    for(int i = 0 ; i < n ; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}