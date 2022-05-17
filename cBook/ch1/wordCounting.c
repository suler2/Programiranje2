#include <stdio.h>
#include <stdbool.h>

int main () {
    int count = 0;
    char a;
    bool in = false;
    while ((a = getchar ()) != EOF) {
//izpise vsako besedo v novo vrstico (1)        putchar (a);
        if (a != '\n' && a != ' ' && a != '\t' && !in) {
            count++;
            in = true;
        }
        else {
//(2)            putchar ('\n');
            in = false;
        }
    }
    printf ("\n%d\n", count);
    return 0;
}
