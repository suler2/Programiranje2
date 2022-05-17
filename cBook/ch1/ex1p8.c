#include <stdio.h>

int main () {
    char a;
    int cl = 0;
    int cs = 0;
    int ct = 0;

    while ((a = getchar()) != EOF) {
        if (a == '\n')
            cl++;
        else if (a == '\t')
            ct++;
        else if (a == ' ')
            cs++;
    }
    
    printf ("\nLines: %d\nTabs: %d\nSpaces: %d\n", cl, ct, cs);
    return 0;
}
