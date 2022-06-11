#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int n;
    scanf ("%ld", &n);
    int lastDig[n], val;
    for (int i = 0; i < n; i++) {
        scanf ("%d", &val);
        lastDig[i] = val % 10;
    }
    if (lastDig[n-1] == 0) printf ("Yes");
    else printf ("No");
    return 0;
}