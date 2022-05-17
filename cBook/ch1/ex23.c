/* Exercise 1-23:
Write a program to remove all comments from a c program. Don't forget to handle
quotes strings and character constants properly, C comments do not nest.
*/
#include <stdio.h>
#include <stdbool.h>

#define MAXLEN 100

char line[MAXLEN];
bool isEOF = false;
bool in_comment = false;

int getLine (int current);
void removeComments ();

int main () {
    char c;
    int count;
    while (!isEOF) {
        count = getLine(0);
        removeComments ();
//        printf ("%s\n", line);
        putchar('\n');
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

void removeComments () {
    int i, j;
    /* is in parentheses */
    bool par = false;
    for (i = 0; line[i] != '\0'; i++) {

        if (!par && line[i] == '/' && line[i + 1] == '/')
            break;
        
        else if (!par && line[i] == '/' && line[i + 1] == '*') {
            line[i] = '\0';
            in_comment = true;     
        }
        else if (!par && in_comment && line[i] == '/' && line[i - 1] == '*') {
            in_comment = false;
            continue;
        }
        
        if (!in_comment) {
            if (line[i] == '\'' || line[i] == '"') {
                par = !par;
            }
            putchar(line[i]);
        }
    }
}
