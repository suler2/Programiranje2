/*Exercise 1-20
Write a program detab that replaces tabs in the input with the proper number of
of blanks to space to the next tab stop. Assume a fixed set of tab stops, say
every n columns.
*/
#include <stdio.h>

#define TAB 5

int main () {
    int i, j, k;
    i = 0;
    char c;
    while ((c == getchar()) != EOF) {
        if (c == '\n') {
            i = 0;
        }
        else if (c == ' ') {
            putchar(' ');
            i++;
            k = i;
            for (j = 0; j < TAB - (k % TAB); j++) {
                putchar('*');
                i++;
            }
        }
        else {
        putchar (c);
        i++;
        }
    }
    return 0;
}
