#include <stdio.h>
#include <stdlib.h>

int tenthDigit (int value) {
    return (value % 100) / 10;
}

int main()
{
    int n;
    scanf ("%d", &n);
    int ar[n], sum = 0;
    float count = 0.0;
    for (int i = 0; i < n; i++) {
        scanf ("%d", &ar[i]);
        if (tenthDigit (ar[i]) % 2 != 0) {
            sum += ar[i];
            count += 1;
        }
    }
    if (count > 0)
    printf ("%.2f", sum/count);
    else printf ("%.2f", count);
    return 0;
}

/****
5
10 2334 65 76 80


7
30 15 41 24 48 27 34
****/