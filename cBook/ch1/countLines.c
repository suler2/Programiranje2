#include <stdio.h>

int main () {
    int count = 0;
    int a;
    while ((a = getchar()) != EOF) {
        if (a == '\n') count++;
    }
    putchar (count + '0');
    putchar ('\n');
    return 0;
}
