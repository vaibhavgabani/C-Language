/*
 * P27.c
 *
 *  Created on: 07-Feb-2024
 *      Author: root
 */
#include<stdio.h>

void fibo(int);

int main(){
    int num;
    printf("Enter Number :");
    scanf("%d",&num);
    fibo(num);
    return 0;
}

void fibo(int n) {
    static int a = 0, b = 1, cnt = 0;
    if (cnt < n) {
        printf("%d ", a);
        int c = a + b;
        a = b;
        b = c;
        cnt++;
        fibo(n);
    }
}

