/*
 * P30.c
 *
 *  Created on: 08-Feb-2024
 *      Author: root
 */

#include<stdio.h>
int power(int,int);
int main(){
    int m,n;
    printf("Enter Number :");
    scanf("%d",&m);
    printf("Enter Power :");
    scanf("%d",&n);
    int ans = power(m,n);
    printf("%d Power %d is :%d",m,n,ans);
    return 0;
}
int power(int n , int m){
    if(m <= 0){
        return 1;
    } else {
        return n * power(n, m - 1);
    }
}
