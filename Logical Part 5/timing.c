#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf ("%d", &n);
    int ar[n], count = 0;
    for (int i = 0; i < n; i++) {
        scanf ("%d", &ar[i]);
    }
    for (int i = 0; i < n-1; i++) {
        if (ar[i] == ar[i+1]-1) {
            count += 1;
        }
    }
    printf ("%d", count);
    return 0;
}

/***
5
23 45 46 78 79 100

6
34 67 68 69 70 12
***/