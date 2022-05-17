#include <stdio.h>
#include <stdbool.h>

int main () {
    char c;
    bool in = false;
    
    int words[100];
    for (int i = 0; i < 100; i++) words[i] = 0;
    
    int j = 0;
    
    while (((c = getchar()) != EOF)) {
        if ((c == ' ' || c == '\n' || c == '\t') && in) {
            j++;
            in = false;
        }
        else if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z'){
            words [j]++;
            in = true;
        }
    }
    
    for (int k = 0; k <=j; k++) {
        putchar ('\n');
        for (int l = 0; l < words[k]; l++) {
            putchar ('_');
        }
    }
    putchar ('\n');
    return 0;
}
