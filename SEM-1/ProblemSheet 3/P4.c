// 4)
#include<stdio.h>
int main(){
    int num , sum = 0;
    printf("Enter size of array : ");
    scanf("%d",&num);
    int arr[num];
    //input
    for(int i = 0 ; i < num ; i++){
        printf("Enter value at [%d] : ",i+1);
        scanf("%d",&arr[i]);
    }
    //process & output
    printf("REverce is :");
    for(int i = num-1 ; i>=0 ; i--){
        printf("%d ",arr[i]);
    }
    return 0;
}