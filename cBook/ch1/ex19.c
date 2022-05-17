/* Exercise 1-19
Write a function reverse(s) that reverses the character string s.
Use it to write a program that reverses its input a line at a time.
*/

#include <stdio.h>

#define MAXLEN 100

int getLine (char line[], char reversedLine[], int current);
void reverse (char line[], char reversedLine[], int current, int lim);

int main () {
    char line[MAXLEN];
    char reversedLine[MAXLEN];
    int check = 0;
    while (check >= 0) {
        check = getLine (line, reversedLine, 0);
    }
    return 0;
}
/*
Input vsake vrstice posebej, bere rekurzivno v else.
Ko je newline ali EOF klice reverse, ki obrne string.
Ko je EOF vrne -1, da se loop v main ustavi in neha brat, drugace vraca 0. 
*/
int getLine (char line[], char reversedLine[], int current) {
    char c = getchar ();
    if (c == EOF) {
        line[current] = '\0';
        putchar('\n');
        reverse (line, reversedLine, 0, current - 1);
        return -1;
    }
    else if (c == '\n' || current >= MAXLEN - 1) {
        line[current] = '\0';
        reverse (line, reversedLine, 0, current - 1);
        return 0;
    }
    else {
        line[current] = c;
        return 0 + getLine(line, reversedLine, current + 1);
    }
}
/*
Rekurzivno obraca string v else.
Current zacne z 0 in gre do lim, lim zacne z zadnjim char v line in gre do 0.
Robni pogoj je, ko preberemo vse v line in lim pade pod 0, takrat se printf.
*/
void reverse (char line[], char reversedLine[], int current, int lim) {
    if (lim < 0) {
        reversedLine[current] = '\0';
        printf ("%s\n", reversedLine);
    }
    else {
        reversedLine[current] = line[lim];
        reverse (line, reversedLine, current + 1, lim - 1);
    }
}
