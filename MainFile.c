#include <stdio.h>
#include <conio.h>
#include "headers.h"

int main() {
    printf("Choose the problem(0 to exit):\n");
    printf("1. problem 1 version 1\n");
    printf("2. problem 1 version 2\n");
    char c = '*';
    while (c < '0' || c > '2') {
        c = getch();
        if (c == '1') version1();
        else if (c == '2') version2();
        else if (c == '0') {
            printf("Successfully exit\n");
            break;
        } else
            printf("Error\n");
    }

    return 0;
}