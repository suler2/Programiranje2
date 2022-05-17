#include <stdio.h>

int main () {
    int count = 0;
    char a;
    while ((a = getchar()) != EOF) {
        if (a == 10) {
            count++;
        }
    }
    putchar(a);
    return 0;
}
