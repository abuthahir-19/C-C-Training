#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf ("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++) {
        scanf ("%d", &ar[i]);
    }
    for (int i = n-1; i >= 0; i--) {
        if (abs (ar[i] - ar[i-1]) > 1) {
            printf ("%d-%d", ar[i-1], i-1);
            return 0;
        }
    }
    return 0;
}

/****
14
10 20 30 25 12 90 100 88 43 55 55 98 99 100
****/