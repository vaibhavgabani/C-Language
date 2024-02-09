/*
 * P29.c
 *
 *  Created on: 08-Feb-2024
 *      Author: root
 */


#include<stdio.h>
int add(int);
int main(){
    int num;
    printf("Enter Number :");
    scanf("%d",&num);
    int ans = add(num);
    printf("Ans add number up to %d is : %d",num,ans);
    return 0;
}
int add(int n){
    if(n <= 0){
        return 0;
    } else {
        return n + add(n-1);
    }
}
