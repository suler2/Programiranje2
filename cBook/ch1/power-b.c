#include <stdio.h>

int power (int a, int b) {
    if (a == 0) 
        return 0;
    else if (b == 0)
        return 1;
    else 
        return a * power (a, b - 1);
}

int main () {
    int a, b;
    scanf ("%d %d", &a, &b);
    printf ("%d\n", power(a, b));
    return 0;
}
