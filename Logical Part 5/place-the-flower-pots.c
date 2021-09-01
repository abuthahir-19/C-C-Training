#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int c1, c2, c3, n, shelfCount = 0;
    scanf ("%d %d %d", &c1, &c2, &c3);
    scanf ("%d", &n);
    if (n > (c1+c2+c3)) {
        int rem = abs (n - (c1+c2+c3));
        n = (n - c1);
        shelfCount++;
        if (n > 0) {
            n = n - c2;
            shelfCount++;
        }
        if (n > 0) {
            n = n - c3;
            shelfCount++;
        }
        printf ("%d %d",shelfCount, n);
    }
    else {
        n = n - c1;
        shelfCount++;
        if (n > 0) {
            n = n - c2;
            shelfCount++;
        }
        if (n > 0) {
            n = n - c3;
            shelfCount++;
        }
        printf ("%d %d", shelfCount, 0);
    }
    return 0;
}


/**
9 8 7
11

5 3 2
12
**/