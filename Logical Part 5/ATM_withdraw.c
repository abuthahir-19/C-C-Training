#include <stdio.h>
#include <stdlib.h>

int availableDenominies (int A, int B, int X) {
    if (B*500 == X || A*100 == X) return 1;
    for (int i = 1; i <= A; i++) {
        int init = 100 * i;
        for (int j = 1; j <= B; j++) {
            int Binit = 500 * j, tot = Binit + init;
            if (tot - X == 0) return 1;
        }
    }
    return 0;
}

int main ()
{
    int A, B, X;
    scanf ("%d %d %d", &A, &B, &X);
    int satisfiedOrNot = availableDenominies (A, B, X);

    if ((X % 100) != 0) {
        printf ("Invalid Amount");
    }
    else if (!satisfiedOrNot) {
        printf ("Insufficient Money");
    }
    else if (satisfiedOrNot) {
        printf ("Collect Your Cash");
    }
    return 0;
}

/**
2 3
700


7 1
1500

2 10
1800


2 10
1250



3 1
500
**/