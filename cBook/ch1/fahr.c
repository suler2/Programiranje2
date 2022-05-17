#include <stdio.h>

int main () {
    float cels = 0;
    float fahr = 0;
    while (fahr <= 300) {
        cels = (5.0/9.0) * (fahr - 32);
        printf ("%.1f\t%.1f\n", fahr, cels);
        fahr = fahr + 20;
    }
    
    return 0;
}
