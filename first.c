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

    int x = 0, firstTime = 0, moveCount = 0;
    for (int i = 0; i < n; i++) {
        if (i == oddPos[x] && x < k) {
            if (firstTime == 0) {
                printf ("%d ", a[i]);
                firstTime++;
                moveCount++;
            }
            int start = oddPos[x++];
            int end = oddPos[x];
            for (int j = end-1; j > start; j--) {
                printf ("%d ", a[j]);
                moveCount++;
            }
            printf ("%d ", a[end]);
            moveCount++;
            i += (moveCount-1);
        }
        else {
            printf ("%d ", a[i]);
        }
    }
    return 0;
}

/**
10
2 5 16 18 22 17 90 24 21 22


**/
