#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int firstDigit (int value) {
    int len = (int)log10 (value);
    value = (int) (value / pow (10, len));
    return value;
}

int lastDig (int value) {
    return value % 10;
}

int main()
{
    int n;
    scanf ("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++) {
        scanf ("%d", &ar[i]);
    }
    for (int i = 0; i < n; i++) {
        if (lastDig (ar[i]) % 2 != 0 && firstDigit (ar[i]) % 2 != 0) {
            printf ("%d ", ar[i]);
        }
    }

    return 0;
}

/***
4
21 33 12 15

7
123 456 567 21 58 93 103
**/