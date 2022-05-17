#include <stdio.h>

int power (int a, int b) {
    if (a == 0) 
        return 0;
    else {
        int i;
        int result = 1;
        for (i = 0; i < b; i++) {
            result = result * a;
        }
        return result;
    }
}

int main () {
    int a, b;
    scanf ("%d %d", &a, &b);
    printf ("%d\n", power(a, b));
    return 0;
}
