#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf ("%d", &n);
    int ar[n], len =  n-1;
    for (int i = 0; i < n; i++) {
        scanf ("%d", &ar[i]);
    }
    for (int i = 0; i < n/2; i++) {
        int t;
        if (ar[i] % 2 == 0 && ar[len] % 2 == 0) {
            t = ar[i];
            ar[i] = ar[len];
            ar[len] = t;
        }
        else if (ar[i] % 2 != 0 && ar[len] % 2 != 0) {
            t = ar[i];
            ar[i] = ar[len];
            ar[len] = t;
        }
        len--;
    }
    for (int i = 0; i < n; i++) {
        printf ("%d ", ar[i]);
    }
    return 0;
}

/***
7
4 11 17 6 11 18 2
***/