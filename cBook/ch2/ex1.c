/* Exercise 2-1:
Write a program to determine the ranges char, short, int and long variables,
both signed and unsigned, by printing apropriate values from standard headers
and direct computation.
*/
#include <stdio.h>

int main () {
    char c;
    short s;
    int i;
    long l;
    unsigned char uc;
    unsigned short us;
    unsigned int ui;
    unsigned long ul;
    
    
    
    printf ("Char:   %d %lu\n", c, sizeof(c));
    printf ("UChar:  %d %lu\n", uc, sizeof(uc));
    printf ("Short:  %d %lu\n", s, sizeof(s));
    printf ("UShort: %d %lu\n", us, sizeof(us));
    printf ("Int:    %d %lu\n", i, sizeof(i));
    printf ("UInt:   %d %lu\n", ui, sizeof(ui));
    printf ("Long:   %ld %lu\n", l, sizeof(l));
    printf ("ULong:  %lu %lu\n", ul, sizeof(ul));
    
    return 0;
}
