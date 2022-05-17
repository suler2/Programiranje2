/*  Exercise 1-16
Revise the main routine of the longest line program so it will correctly
print the length of arbitrarily long input lines, and as much as possible
of the text.
*/

#include <stdio.h>

#define MAXLEN 100

/* loop
int getLine (char line[]);
*/
int getLine (char line[], int current);
void print (char line[], int len);

int main () {
    char line[MAXLEN];
/* loop
    int len = getLine(line);
*/
    int len = getLine(line, 0);
    print(line, len);
    return 0;
}

//rekurzivno
int getLine (char line[], int current) {
    char c = getchar();
    if (c == EOF || c == '\n' || current - 1 >= MAXLEN) {
        line[current] = '\0';
        return 0;
    }
    else {
        line[current] = c;
        return 1 + getLine (line, current + 1);
    }
}

/*  loop
int getLine (char line[]) {
    char c;
    int len = 0;
    while ((c = getchar()) != '\n' && c != EOF && len < MAXLEN) {
        line[len] = c;
        len++;
    }
    line[len] = '\0';
    return len;
}
*/
void print (char line[], int len) {
    printf ("\n%s %d\n", line, len);
}
