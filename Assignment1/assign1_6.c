#include <stdio.h>

int main() {
    int num;

    printf("Enter the number which you want the table for: ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++) {
        printf("Table of %d * %d = %d\n", num, i, num * i);
    }

    return 0;
}

