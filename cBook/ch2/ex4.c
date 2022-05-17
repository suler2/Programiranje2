#include <stdio.h>

char *getLine();

int main() {
    char *line;
    line = getLine();
    printf ("%d\n", line[0]);
    return 0;
}

char *getLine() {
    char *line;
    line[0] = 1;
    return line;
}
