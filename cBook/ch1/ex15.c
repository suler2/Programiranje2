#include <stdio.h>

int equation (int fahr) {
    return (5.0 / 9.0) * (fahr - 32);
}

void celsius (int fahr, int limit) {
    if (fahr <= limit) {
        printf ("%d %d\n", fahr, equation (fahr));
        celsius (fahr + 20, limit);
    }
}

int main () {
    
    celsius (0, 300);
    
    return 0;
}
