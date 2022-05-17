#include <stdio.h>
//random comments for testing
int main () {
    float cels = 0.0;
    float fahr;
    
/* also here *///
    while (cels <= 300) {
        fahr = (9.0/5.0)/* and here */ * cels + 32;
        printf ("%.1f\t%.1f\n", cels, fahr);
        cels = cels + 20;
    }
/*/* and here */*/
    return 0;
}

// and here
