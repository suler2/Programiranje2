/*Exercise 1-20
Write a program detab that replaces tabs in the input with the proper number of
of blanks to space to the next tab stop. Assume a fixed set of tab stops, say
every n columns.
*/
#include <stdio.h>

#define MAXLEN 100
#define TABLEN 5

char line[MAXLEN];

int main () {
    char c;
    int diff, count, out, i;
    count = out = diff = 0;
    while ((c = getchar()) != EOF && c != '\n' && (out - 1) < MAXLEN) {
        count++;
        if (c != ' ') {
            line[out] = c;
            out++;
        }
        else { 
            diff = count % TABLEN;
            for (i = 0; i < (TABLEN - diff); i++) {
                line[out] = '*';
                out++;
            }
        }
//        printf ("%s count = %d, out = %d, diff = %d\n", line, count , out ,diff);
    }
    line[out + 1] = '\0';
    printf ("%s\n", line);
    return 0;
}
