#include <stdio.h>
#include <stdlib.h>

int indexOfParts (int *a, int size) {
    for (int i = 0; i < size; i++) {
        if (a[i] > a[i+1]) {
            return i;
        }
    }
}

int productOfSums (int size, int a[]) {
    if (size < 3) return -1;
    else {
        int index = indexOfParts (a, size), fir = 0, sec = 0;
        for (int i = 0; i <= index; i++) {
            fir += a[i];
        }
        for (int i = index; i < size; i++) {
            sec += a[i];
        }
        return (fir * sec);
    }
}

int main ()
{
    int n;
    scanf ("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) scanf ("%d", &a[i]);
    int pro = productOfSums (n, a);
    printf ("%d", pro);
    return 0;
}


/**
7
4 7 15 11 10 5 2



**/