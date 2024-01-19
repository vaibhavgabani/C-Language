#include<stdio.h>
int min(int arr[],int n){
    int nmin = 99999999;
    for(int i = 0 ; i < n; i++){
        if(nmin > arr[i]){
            nmin = arr[i];
        }
    }
    return nmin;
}
int max(int arr[],int n){
    int nmax = -99999999;
    for(int i = 0 ; i < n; i++){
        if(nmax < arr[i]){
            nmax = arr[i];
        }
    }
    return nmax;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    int m = min(arr,n);
    int y = max(arr,n);
    printf("%d %d",m,y);
    return 0;
}