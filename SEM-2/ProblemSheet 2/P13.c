#include<stdio.h>
void input(int *, int);
void print(int *, int);
void delete(int * , int * , int );
void insert(int * , int * , int );
int main(){
    int size;
    printf("Enter size of array :");
    scanf("%d",&size);
    int arr[size];
    //input
    input(arr,size);
    //print
    printf("\n entered value : ");
    print(arr,size);
    printf("\n");
    
    // int po;
    // printf("enter position :");
    // scanf("%d",&po);
    // if(po > size || po < 0){
    //     printf("Enter valid position");
    // } else {
    //     delete(arr,&size,po);
    //     print(arr,size);    
    // }
    
    int po1;
    printf("enter position :");
    scanf("%d",&po1);
    if(po1 > size || po1 < 0){
        printf("Enter valid position");
    } else {
        insert(arr,&size,po1);
        print(arr,size);    
    }
    
    return 0;
}
void input(int *ptr, int size){
    for(int i = 0 ; i < size ; i++){
        printf("Enter value [%d] :",i+1);
        scanf("%d",&*(ptr+i));
    }
    return;
}
void print(int *ptr, int size){
    for(int i = 0 ; i < size ; i++){
        printf("%d ",*(ptr+i));
    }
    return;
}
void delete(int *ptr , int *size , int po){
    for(int i = po - 1; i < *size - 1 ; i++){
        *(ptr + i) = *(ptr + i + 1);
    }
    *size = *size - 1;
}
void insert(int *ptr , int *size , int po){
        int n ;
        printf("Enter value :");
        scanf("%d",&n);
        for(int i = *size ; i > po ; i--){
            *(ptr + i) = *(ptr + i - 1);
        }
        *(ptr + po) = n;
        *size = *size + 1;
    }