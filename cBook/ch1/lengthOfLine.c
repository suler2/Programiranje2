#include <stdio.h>

#define MAXLINE 100
/*
int maxline[MAXLINE + 1];

void copy (int line[], int count) {
    int i;
    maxline[100] = count;
    for (i = 0; i < count; i++) 
        maxline[i] = line[i];
}

void print () {
    putchar('\n');
    putchar(maxline[100] + '0');
    putchar('\n');
}
*/
int main () {
    char c;
    char line[MAXLINE + 1];
    int count = 0;
    int maxcount = 0;
    
    char maxline[MAXLINE + 1];
    int i;
    
    while ((c = getchar()) != EOF) {
    /*
        if (line[100] >= MAXLINE) {
            copy (line, count);
            break;
        }
   
        else if (c == '\n' && maxline[100] < count) {
            copy (line, count);
            count = 0;    
        }
*/
        if (c == '\n') {
            if (maxline[100] < count) {
                maxcount = count;
                for (i = 0; i < count; i++) 
                    maxline[i] = line[i];
            }
            count = 0;
        }
        else {
            line[count] = c;
            count++;
        }
    }
    
//    print ();

    printf ("\n%d\n", maxcount);
    for (i = 0; i < maxcount; i++) {
        putchar(maxline[i]);
    }
    putchar('\n');
    
    return 0;
}
