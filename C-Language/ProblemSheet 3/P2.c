// 2)
#include<stdio.h>
int main(){
    int num,cnt = 0;
    printf("Enter size of array : ");
    scanf("%d",&num);
    int arr[num];
    //input
    for(int i = 0 ; i < num ; i++){
        printf("Enter value at [%d] : ",i+1);
        scanf("%d",&arr[i]);
    }
    //process & output
    for(int i = 0 ; i < num ; i++){
         for(int j = 1 ; j <= arr[i] ; j++){
            if(arr[i] % j == 0){
                cnt++;
            }
        }
        if(cnt == 2){
            //output
            printf("%d ",arr[i]);
        }
        cnt = 0;
    }
    return 0;
}