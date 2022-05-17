#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

float* pretvorba(int *tabela, int velikost) {
    float *nova = calloc(velikost, sizeof(float));
    for (int i = 0; i < velikost; i++) 
        nova[i] = (float)tabela[i];
    return nova;
}

bool prastevilo(int n) {
    if(n == 1) return false;
    if(n == 2) return true;
    else if (n > 2 && (n % 2) == 0) return false;
    else {
        for (int i = 3; i <= (int)ceil(sqrt(n)); i = i + 2)
            if((n % i) == 0) return false;
    }
    return true;
}

void druga() {
    int n = 0;
    int len = 0;
    int maxLen = 0;
    while (true) {
        scanf("%d", &n);
        if(n == 0) break;
        if(prastevilo(n)) len++;
        else {
            if(len > maxLen)maxLen = len;
            len = 0;
        }
    }
    printf("%d\n", len);
}

int kovanci[] = {200, 100, 50, 20, 10, 5, 2, 1};

int tretja(int vrednost) {
    int vrednost2 = vrednost * 100;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            
        }
    }
}

int main() {
    int tabela[] = {0, 1, 2, 3, 4, 5};
    float *tabela2 = pretvorba(tabela, 6);
    for (int i = 0; i < 6; i++)
        printf("%f ", tabela2[i]);
    printf("\n");
    druga();
    return 0;
}
