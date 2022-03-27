#include <stdio.h>
#include <stdlib.h>

void reverse (int ar[], int size) {
    int end = size-1;
    for (int i = 0; i < size/2; i++) {
        int t = ar[i];
        ar[i] = ar[end];
        ar[end] = t;
        end--;
    }
}

int main()
{
    int n;
    scanf ("%d", &n);
    int ar[n];
    
    for (int i = 0; i < n; i++) {
        scanf ("%d", &ar[i]);
    }

    reverse(ar, n);

    for (int i = 0; i < n; i++) {
        printf ("%d ", ar[i]);
    }
}