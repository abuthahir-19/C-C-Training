#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf ("%d", &n);
    int a[n], oddPos[n], k = 0;
    for (int i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
        if (a[i] % 2 != 0) {
            oddPos[k++] = i;
        }
    }

    printf ("Output : \n");
    int x = 0, firstTime = 0;
    if (k > 1) {
        for (int i = 0; i < n;) {
            if (i >= oddPos[0] && i <= oddPos[k-1] && x < k) {
                if (firstTime == 0) {
                    printf ("%d ", a[i]);
                    firstTime++;
                    i++;
                }
                int start = oddPos[x++], end = oddPos[x];
                for (int j = end-1; j > start; j--) {
                    printf ("%d ", a[j]);
                    i++;
                }
                printf ("%d ", a[end]);
                i++;
            }
            else {
                printf ("%d ", a[i]);
                i++;
            }
        }
    }
    else {
        for (int i = 0; i < n; i++) {
            printf ("%d ", a[i]);
        }
    }
    return 0;
}

/**
10
2 5 16 18 22 17 90 24 21 22
Output : 
2 5 22 18 16 17 24 90 21 22 



5
6 -8 -5 2 -18
Output :      
6 -8 -5 2 -18 
**/
