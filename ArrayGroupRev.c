#include <stdio.h>
#include <stdlib.h>

void reverseGroupOfM (int ar[], int size, int m) {
    int temp[size], len = 0;
    int end = m;
    for (int i = 0; i < size; i+=m) {
        if (abs (i - size) >= m) {
            for (int j = end-1; j >= i; j--) {
                temp[len++] = ar[j];
            }
        }
        else {
            for (int j = i; j < size; j++) {
                temp[len++] = ar[j];
            }
            break;
        }
        end += m;
    }
    for (int i = 0; i < len; i++) {
        ar[i] = temp[i];
    }
}

int main()
{
    int m, n;
    scanf ("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }
    scanf ("%d", &m);
    reverseGroupOfM (ar, n, m);

    for (int i = 0; i < n; i++) {
        printf ("%d ", ar[i]);
    }
}

/**
5
10 22 33 45 600
2
**/