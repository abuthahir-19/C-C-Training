#include <stdio.h>
#include <stdlib.h>

int max (int ar[], int size) {
    int max = -1;
    for (int i = 0; i < size; i++) {
        if (ar[i] > max) {
            max = ar[i];
        }
    }
    return max;
}

int main()
{
    int n, w;
    scanf ("%d %d", &n, &w);
    int ar[n], end = w, prevMax = -1, curMax;
    for (int i = 0; i < n; i++) {
        scanf ("%d", &ar[i]);
    }
    for (int i = 0; i < n; i++) {
        if (!(abs (i-n) >= w)) break;
        int window[w], len = 0;
        for (int j = i; j < end; j++) {
            window[len++] = ar[j];
        }
        curMax = max (window, len);
        if (curMax == prevMax) {
            printf ("%d ", curMax);
        }
        else if (curMax > prevMax) {
            printf ("%d ", curMax);
        }
        else {
            printf ("%d ", prevMax);
        }
        prevMax = curMax;
        end+=1;
    }
}

/*****
7 3
10 3 8 4 2 11 1 
*/