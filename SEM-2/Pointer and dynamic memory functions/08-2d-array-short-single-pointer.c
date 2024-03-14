#include <stdio.h>

void input(int *, int, int);
void output(int *, int, int);
void sort(int *, int, int);
void sortrows(int * , int , int);
void sortcols(int * , int , int);
int main() {
    int m = 3, n = 3;
    int arr[m][n];
    input(&arr[0][0], m, n);
    output(&arr[0][0], m, n);
    printf("\nSrot \n");
    sortcols(&arr[0][0],m,n);
    output(&arr[0][0], m, n);
    return 0;
}

void input(int *ptr, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter at [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &*(ptr + i * n + j));
        }
    }
    return;
}

void output(int *ptr, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", *(ptr + i * n + j));
        }
        printf("\n");
    }
    return;
}

void sort2(int *ptr, int m, int n){
    for(int i = 0 ; i < m ; i++){
       for(int j = 0 ; j < n ; j++){
           for(int k = 0 ; k < m ; k++){
               for(int z = 0 ; z < n ; z++){
                   if(*(ptr+i * n +j) < *(ptr+k * n +z)){
                       int temp = *(ptr+k * n +z);
                       *(ptr+k * n +z) = *(ptr+i * n+j);
                       *(ptr+i * n +j) = temp;
                   }
               }
           }
       }
   }
}
void sortrows(int *ptr , int m, int n){
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            for(int k = 0 ; k < n ; k++){
                if(*(ptr+ i * n + j) < *(ptr+ i * n + k)){
                    int temp = *(ptr+ i * n + k);  
                    *(ptr+ i * n + k) = *(ptr+ i * n + j);
                    *(ptr+ i * n + j) = temp;
                }
            }
        }
    }
}
void sortcols(int *ptr, int m, int n){
    for(int j = 0 ; j < n ; j++){
        for(int i = 0 ; i < m ; i++){
            for(int k = 0 ; k < m ; k++){
                if(*(ptr + j * m + i) < *(ptr + k * m + i)){
                    int temp = *(ptr + k * m + i);
                    *(ptr + k * m + i) = *(ptr + j * m + i);
                    *(ptr + j * m + i) = temp;
                }
            }
        }
    }
}