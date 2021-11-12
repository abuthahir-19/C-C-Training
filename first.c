#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int power (int base, int exp) {
    int res = 1;
    while (exp != 0) {
        res = res * base;
        exp--;
    }
    return res;
}
int decimal (int b) {
    int p = 0, d = 0;
    while (b != 0) {
        d += (b % 10) * (power (2, p));
        p++;
        b/=10;
    }
    return d;
}

int includes (int size, int indexes[], int index) {
    for (int i = 0; i < size; i++) {
        if (indexes[i] == index) return 1;
    }
    return 0;
}

int getIntegerValue (int n) {
    int ar[1001], k =0, b = 0, indexes[1001], v = 0, x = 0, added = 0;
    while (n != 0) {
        ar[k++] = n % 10;
        n/=10;
    }
    for (int i = k-1; i >= 0; i--) {
        if (ar[i] == 1 || ar[i] == 0) {
            b = b * 10 + ar[i];
            indexes[v++] = i;
        }
    }
    for (int i = k-1; i >= 0; i--) {
        if (!includes(v, indexes, i)) {
            x = x * 10 + ar[i];
        }
        else if (includes (v, indexes, i) && !added){
            x = x * 10 + decimal(b);
            added = 1;
        }
    }
    return x;
}

int main() 
{
    int n;
    scanf ("%d", &n);
    int x = getIntegerValue(n);
    printf ("%d", x);
    return 0;
}

/**
9101485
**/
