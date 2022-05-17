/* Exercise 1-17
Write a program to print all input lines that are longer than 8 characters
*/

#include <stdio.h>

#define MAXLEN 100
#define LIMIT 8

int getLine (char line[], int current);
//void print (char line[], int current);

int main () {
    char line[MAXLEN];
    int check = 0;
    while (check != -1) {
        check = getLine (line, 0);
        if (check > LIMIT) {
            printf ("%s\n", line);
/* printanje s putchar
            print (line, 0);
            putchar('\n');
*/        }
    }
    
    return 0;
}

int getLine (char line[], int current) {
    char c = getchar();
    if (c == EOF) return -1;
    else if (c == '\n' || (current - 1) >= MAXLEN) {
        line[current] = '\0';
        return 0;
    }
    else {
        line[current] = c;
        return 1 + getLine (line, current + 1);
    }
}
/*
void print (char line[], int current) {
    if (line[current] != '\0') {
        putchar(line[current]);
        print (line, current + 1);
    }
}
*/
