#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int isPrime (int value) {
    if (value > 1) {
        for (int i = 2; i*i <= value; i++) {
            if (value % i == 0) return 0;
        }
        return 1;
    }
    else return 0;
}

int countPrimes (int col[], int size) {
    int count  = 0;
    for (int i = 0; i < size; i++) {
        if (isPrime (col[i])) {
            count++;
        }
    }
    return count;
}
int main()
{
    int n;
    scanf ("%d", &n);
    int a[n][n], max = -1, prevRow = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf ("%d", &a[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++) {
        int column[n], index = 0;
        for (int j = 0; j < n; j++) {
            column[index++] = a[j][i];
        }
        int res = countPrimes (column, index);
        if (res > prevRow) {
            max = i;
            prevRow = res;
        }
    }
    if (max != -1)
        for (int i = 0; i < n; i++) {
            printf ("%d\n", a[i][max]);
        }
    else printf ("%d", max);
    return 0;
}

/**
4
68 8 22 4
85 21 54 55
24 88 91 39
44 60 34 50

**/