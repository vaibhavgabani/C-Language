/*
 * P15.c
 *
 *  Created on: 08-Feb-2024
 *      Author: root
 */
#include <stdio.h>

int checkdate(int, int, int);

int main() {
    int day, month, year;

    printf("Enter date (DD MM YYYY): ");
    scanf("%d %d %d", &day, &month, &year);
    int check = checkdate(day, month, year);
    if (check == 0) {
        printf("Date is valid");
    } else {
        printf("Date is not valid");
    }
    return 0;
}

int checkdate(int day, int month, int year) {
    if (year < 1900 || year > 2100) {
        return 1; // Date is not valid
    }

    if (month < 1 || month > 12) {
        return 1; // Date is not valid
    }

    if (day < 1 || day > 31) {
        return 1; // Date is not valid
    }

    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) {
        return 1; // Date is not valid
    }

    if (month == 2) {
        // Check for leap year
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            if (day > 29) {
                return 1; // Date is not valid
            }
        } else {
            if (day > 28) {
                return 1; // Date is not valid
            }
        }
    }

    return 0; // Date is valid
}


