#include <stdio.h>

int main () {
    char a;
    while ((a = getchar())!= EOF) {
        switch (a) {
            case '\t':  putchar ('\\');
                        putchar ('t');
                        break;
            case ' ':   putchar ('\\');
                        putchar ('b');
                        break;
            default:    putchar (a);
        }
    }
    putchar ('\n');
    return 0;
}
