#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k;
    scanf ("%d %d", &n, &k);
    int ar[n], oneCount = 0;
    for (int i = 0; i < n; i++) {
        scanf ("%d", &ar[i]);
    }
    
    for (int i = 0; i < n; i++) {
        if (oneCount == k) {
            printf ("%d ", 0);
            oneCount = 0;
        }
        if (ar[i] != 1) oneCount = 0;
        else if (ar[i] == 1) oneCount += 1;
        printf ("%d ", ar[i]);
    }
    if (oneCount == k) printf ("0");
    return 0;
}

/**
12 2 
1 0 1 1 0 1 1 0 1 1 1 1
 */