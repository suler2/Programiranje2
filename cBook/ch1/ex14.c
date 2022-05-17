#include <stdio.h>

#define LIM 255
int words[LIM];

int main () {
    char c;
    int i, j;
    for (i = 0; i < LIM; i++) 
        words[i] = 0;
    
    while ((c = getchar()) != EOF) {
        words[c]++;   
    }
    putchar('\n');
    for (i = 0; i < LIM; i++) {
        if (words[i] != 0) {
            for (j = 0; j < words[i]; j++) {
                putchar ('-');
            }
            printf ("\n%d x %c\n", words[i], i);
        }
    }        

    return 0;
}
