#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf ("%d", &n);
    int ar[n], sum[n], len = 0;
    for (int i = 0; i < n; i++) {
        scanf ("%d", &ar[i]);
        sum[i] = ar[i];
    }
    while (true) {
        for (int i = 1; i < n; i++) {
            sum[len++] = (sum[i] + sum[i-1]);
        }
        n = len;
        if (len == 1) {
            printf ("%d", sum[0]);
            return 0;
        }
        len = 0;
    }
    return 0;
}

/***
5
1 2 3 4 5


4
3 8 9 5
***/