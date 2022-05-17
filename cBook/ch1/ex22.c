/* Exercise 1-22:
Write a program to "fold" long input lines into two or more shorter lines
after the last non-blank character that occurs before the n-th column of input.
Make sure your program does something intelligent with very long lines, and if 
there are no blanks or tabs before the specified column.
*/
#include <stdio.h>
#include <stdbool.h>

#define MAXLEN 100

char line[MAXLEN];
bool isEOF = false;

int getLine (int current);
void editLine (int end, int n);

int main () {
    int count, n;
    count = 0;
    n = 14;
//    n = scanf ("%d ", &n);
    while (!isEOF) {
        count = getLine(0);
        editLine(count, n);
        printf ("%s\n", line);
    }
    return 0;
}

int getLine (int current) {
    char c;
    c = getchar();
    if (c == EOF) {
        isEOF = true;
        line[current] = '\0';
        return 0;
    }
    else if (c == '\n' || (current - 1) >= MAXLEN) {
        line[current] = '\0';
        return 0;
    }
    else {
        line[current] = c; 
        return 1 + getLine(current + 1);
    }
}

void editLine (int end, int n) {
    int i, blank, start;
    blank = -1;
    start = 0;
    for (i = 0; i < end; i++) {
        if (line[i] == ' ') {
            blank = i;
        }
        else {}
        if ((i - start) % n == 0 && blank != -1) {
            line[blank] = '\n';
            i = blank + 1;
            start = blank;
            blank = -1;
        }
        else {
            /* Tukaj pride se za besede daljse od n. */
        }
    }
}
