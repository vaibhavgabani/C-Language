//1)	 Write a C program to sort an array of 20 integers.
// Enter [1] value : 5
// Enter [2] value : 4
// Enter [3] value : 3
// Enter [4] value : 2
// Enter [5] value : 1
// Accanding order : 1 2 3 4 5 
// Decading order : 5 4 3 2 1
#include<stdio.h>
int main(){
    int arra[5],temp1=0,temp2=0;
    int arrd[5];
    for(int i = 0 ; i < 5 ; i++){
        printf("Enter [%d] value : ",i+1);
        scanf("%d",&arra[i]);
    }
    for(int i = 0 ; i < 5 ; i++){
        arrd[i] = arra[i];
    }
    //chadto process
    for(int i = 0 ; i < 5 ; i++){
        for(int j = i+1 ; j < 5 ; j++){
            if(arra[i]>arra[j]){
                temp1 = arra[j];
                arra[j] = arra[i];
                arra[i] = temp1;
            }
        }
    }
    //utarto process
    for(int i = 0 ; i < 5 ; i++){
        for(int j = i+1 ; j < 5 ; j++){
            if(arrd[i]< arrd[j]){
                temp2 = arrd[j];
                arrd[j] = arrd[i];
                arrd[i] = temp2;
            }
        }
    }
    printf("Accanding order : ");
    for(int i = 0 ; i < 5 ; i++){
        printf("%d ",arra[i]);
    }
    printf("\nDecading order : ");
    for(int i = 0 ; i < 5 ; i++){
        printf("%d ",arrd[i]);
    }
    return 0;
}
  