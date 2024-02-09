/*
 * P17.c
 *
 *  Created on: 08-Feb-2024
 *      Author: root
 */
#include<stdio.h>
struct time {
    int ss;
    int mm;
    int hh;
};

struct time input(void);
void display(struct time);
int validate(struct time);

int main() {
    struct time s;
    //input
    s = input();
    //display
    display(s);
    //check
    int check = validate(s);
    if (check == 0) {
        printf("\nEnter Time is Valid.");
    } else {
        printf("\nEnter Time is not Valid.");
    }
    return 0;
}

struct time input(void) {
    struct time t;

    printf("Enter second : ");
    scanf("%d",&t.ss);

    printf("Enter Minute : ");
    scanf("%d",&t.mm);

    printf("Enter Hours : ");
    scanf("%d",&t.hh);

    return t;
}

void display(struct time t) {
    printf("\n%d:%d:%d",t.ss,t.mm,t.hh);
}

int validate(struct time t) {
    if (t.hh >= 0 && t.hh <= 23 && t.mm >= 0 && t.mm <= 59 && t.ss >= 0 && t.ss <= 59) {
        return 0; // valid
    } else {
        return 1; // invalid
    }
}

