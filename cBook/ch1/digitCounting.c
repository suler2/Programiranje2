#include <stdio.h>

int main () {
    
    int types[12];
    char a;
    
    for (int i = 0;i < 12; i++)
        types[i] = 0;
    
    while ((a = getchar()) != EOF) {
        if (a >= '0' && a <= '9')
            types[a - '0']++; 
        else if (a == '\t' || a == ' ' || a == '\n') 
            types[10]++;
        else 
            types[11]++;
    }
    putchar ('\n');
    for (int i = 0; i < 12; i++) {
        printf ("%d\n", types[i]);
    }
    return 0;
}
