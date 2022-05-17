#include <stdio.h>

int main () {
    char a;
    char prev = '0';
    int count = 0;
    while ((a = getchar()) != EOF) {
        if (a == ' ') {
            if (prev != ' ') {
                putchar (a);
                prev = ' ';
                count++;
            }
            else;
        }
        else {
            prev = '0';
            putchar (a);
        }
    }
    printf ("%d\n", count);
    return 0;
}
