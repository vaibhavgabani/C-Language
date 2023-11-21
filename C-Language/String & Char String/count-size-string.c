#include <stdio.h>

int main() {
    char str[50];
    int cnt = 0, temp;
    printf("Enter Value of string: ");
    scanf(" %[^\n]s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        cnt++;
    }

    printf("Size you Enter is: %d\n", cnt);

    int b = cnt;

    for (int i = 0, j = b - 1; i < j; i++, j--) {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
