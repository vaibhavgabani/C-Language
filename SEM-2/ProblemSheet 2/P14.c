#include<stdio.h>
void input(int *, int, int);
void output(int *, int, int);
void trans(int *, int, int);
int check(int , int , int , int );
void add(int *, int *, int * , int , int );
void sub(int *, int *, int * , int , int );
void mul(int *, int *, int * , int , int , int);

int main() {
    int m1 , n1 , m2 , n2 ;
    //input of array size
    // 1 array
    printf("\nEnter size of 1 array : \n");
    printf("Enter 1 array M :");
    scanf("%d",&m1);
    printf("Enter 1 array N :");
    scanf("%d",&n1);
    //2 array
    printf("\nEnter size of 2 array : \n");
    printf("Enter 2 array M :");
    scanf("%d",&m2);
    printf("Enter 2 array N :");
    scanf("%d",&n2);


    int arr1[m1][n1] , arr2[m2][n2]; // make 2 array

    // input
    // 1 array
    printf("Enter Value inside 1 array : \n");
    input(&arr1[0][0], m1, n1);
    // 2 array
    printf("Enter Value inside 2 array : \n");
    input(&arr2[0][0], m2, n2);

    //print enter value
    //1 array
    printf("\nEntered  Value inside 1 array : \n");
    output(&arr1[0][0], m1, n1);
    //2 array
    printf("Entered  Value inside 1 array : \n");
    output(&arr2[0][0], m2, n2);

    // add
    if(check(m1 , n1 , m2 , n2) == 1){
        int result[m1][n1];
        add(&arr1[0][0], &arr2[0][0], &result[0][0], m2, n2 );
        printf("\nAddaction is : \n");
        output(&result[0][0], m1, n1);
    } else {
        printf("addaction is not possible.\n");
    }

    //sub
    if(check(m1 , n1 , m2 , n2) == 1){
        int result[m1][n1];
        sub(&arr1[0][0], &arr2[0][0], &result[0][0], m2, n2 );
        printf("\nSubstraction is : \n");
        output(&result[0][0], m1, n1);
    } else {
        printf("Substraction is not possible.\n");
    }

    // mul
    if(n1 == m2){
        int result[m1][n2];
        mul(&arr1[0][0] , &arr2[0][0] , &result[0][0], m1 , n1 , n2);
        printf("\n Multplaction is : \n");
        output(&result[0][0], m1, n2);
    } else {
        printf("Multplaction is not possible.\n");
    }

    //transpose
    printf("transpose of First matrix : \n");
    trans(&arr1[0][0], m1, n1);
    printf("transpose of Second matrix : \n");
    trans(&arr2[0][0], m2, n2);
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
int check(int m1, int n1, int m2, int n2){
    int cnt = 0;
    if(m1 == m2 && n1 == n2){
        return 1;
    }
    return cnt;
}

void add(int *ptr1, int *ptr2, int *p, int m1 , int n1){
    for(int i = 0 ; i < m1 ; i++){
        for(int j = 0 ; j < n1 ; j++){
            *(p + i * n1 + j) = *(ptr1 + i * n1 + j) + *(ptr2 + i * n1 + j);
        }
    }
}

void sub(int *ptr1, int *ptr2, int *p, int m1 , int n1){
    for(int i = 0 ; i < m1 ; i++){
        for(int j = 0 ; j < n1 ; j++){
            *(p + i * n1 + j) = *(ptr1 + i * n1 + j) - *(ptr2 + i * n1 + j);
        }
    }
}

void mul(int *ptr1, int *ptr2, int *p, int m1, int n1 ,int n2){
     // Initialize result matrix to zeros
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            *(p + i * n2 + j) = 0;
        }
    }
     for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            for (int k = 0; k < n2; k++) {
                *(p + i * n2 + k) += *(ptr1 + i * n1 + j) * *(ptr2 + j * n2 + k);
            }
        }
    }
    return;
}

void trans(int *ptr, int m, int n){
    for(int j = 0 ; j < n ; j++){
        for(int i = 0 ; i < m ; i++){
            printf("%d ",*(ptr + i * n + j));
        }
        printf("\n");
    }
    return;
}
