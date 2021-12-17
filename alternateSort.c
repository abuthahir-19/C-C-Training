#include <stdio.h>
#include <stdlib.h>

void alternateSort (int a[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i+1; j < size; j++) {
            if (a[i] > a[j]) {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
    
    int start = size-1, end = 0, i = 0, mid = size / 2;
    
}
int main ()
{
    int n;
    scanf ("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
    }

    alternateSort (a, n);

    for (int i = 0; i < n; i++) {
        printf ("%d", a[i]);
    }
}