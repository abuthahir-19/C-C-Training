#include <stdio.h>
#include <stdlib.h>

void rotateRTimes (int ar[], int size, int r) {
    for (int i = 0; i < r; i++) {
        int last = ar[size-1];
        for (int i = size-2; i >= 0; i--) {
            ar[i+1] = ar[i];
        }
        ar[0] = last;
    }
}
int main()
{
    int n, r;
    scanf ("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++) {
        scanf ("%d", &ar[i]);
    }
    scanf ("%d", &r);
    
    rotateRTimes (ar, n, r);
    for (int i = 0; i < n; i++) {
        printf ("%d ", ar[i]);
    }
    return 0;
}

/** 
5
1 2 3 4 5
2
**/