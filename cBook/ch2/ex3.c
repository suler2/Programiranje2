/* Exercise 2-3:
Write the function htoi(s) which convert a string of hexadecimal digits
(including an optional 0x or OX) into its equivalent integer value.
The allowable digits are 0 through 9, a through f, and A through F.
*/
#include <stdio.h>

int htoi (char a[]) {
    int n = 0;
    for (int i = 2; (i < 20) && (a[i] != '\0'); i++) {
        if (a[i] >= '0' && a[i] <= '9') {
            n = n * 16 + (a[i] - '0');
        }
        else if (a[i] >= 'a' && a[i] <= 'f') {
            n = n * 16 + (a[i] - 'a' + 10);
        }
        else if (a[i] >= 'A' && a[i] <= 'F') {
            n = n * 16 + (a[i] - 'A' + 10);
        }
        else return -1;
    }
    return n;
}

int main () {
    char a[20];
    int number = 0;
    scanf ("%s", a);    
    if (a[0] == '0' && a[1] == 'x') {
        number = htoi(a);
    }
    else {
        number = -1;
    }
    printf ("%d\n", number);
    return 0;
}
