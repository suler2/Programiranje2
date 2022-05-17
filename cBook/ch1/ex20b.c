/*Exercise 1-20 *ta verzija deluje*
Write a program detab that replaces tabs in the input with the proper number of
of blanks to space to the next tab stop. Assume a fixed set of tab stops, say
every n columns.
*/
#include <stdio.h>
#include <stdbool.h>

#define MAXLEN 100
#define TAB 5

char line[MAXLEN];
bool isEOF = false;

int getLine (int current);
void detab (int count);

int main () {
    int count;
    count = 0;
    while (isEOF == false) {
        count = getLine(0);
//        printf ("%s %d\n", line, count);
        detab(count);
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
//v resnici "despace", da se lazje vidi razlika v input/output
void detab (int count) {
    int i, j, k, l;
    j = k = 0;
    for (i = 0; i < count; i++) {
        if (line[i] == ' ') {
            k = TAB - (j % TAB);
            for (l = 0; l < k; l++) {
                putchar ('*');
                j++;
            }
        }
        else {
            putchar(line[i]);
            j++;
        }
    }
    putchar('\n');
}
