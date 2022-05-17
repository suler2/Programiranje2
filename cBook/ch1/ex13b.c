#include <stdio.h>
#include <stdbool.h>

int main () {
    char c;
    
    //ali smo v besedi ali ne
    bool in = false;
    
    int words[100];
    for (int i = 0; i < 100; i++) words[i] = 0;
    
    //st besed
    int j = 0;
    //stevilo vrstic in max st vrstic
    int col = 0;
    int colmax = 0;
    
    while (((c = getchar()) != EOF)) {
        if ((c == ' ' || c == '\n' || c == '\t') && in) {
            j++;
            col = 0;
            in = false;
        }
        else if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z'){
            words[j]++;
            col++;
            in = true;
            if (col > colmax) colmax = col;
        }
    }
    
    putchar('\n');
    for (int k = colmax; k >= 0; k--) {
        for (int l = 0; l <= j; l++) {
            if (k < words[l]) putchar('|');
            else putchar(' ');
        }
        putchar('\n');
    }
    putchar ('\n');
    
    return 0;
}
