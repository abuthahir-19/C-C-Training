#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n, r1, r2;
    scanf ("%d %d %d", &n, &r1, &r2);
    int ar[n], range[n], len = 0;
    for (int i = 0; i < n; i++) {
        scanf ("%d", &ar[i]);
        int val = ar[i];
        bool found = false;
        if (val >= r1 && val <= r2) {
            for (int j = 0; j < len; j++) {
                if (range[j] == val) {
                    found = true;
                    break;
                }
            }
            if (!found) range[len++] = val;
        }
    }
    printf ("%d", len);
    return 0;
}

/****
7 19 44
100 19 51 32 41 89 32

3
****/