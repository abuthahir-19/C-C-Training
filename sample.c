#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main () 
{
    int n;
    scanf ("%d", &n);
    int a[n], prevVal;
    for (int i = 0; i < n; i++) {
        scanf ("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (a[i] % 10 > a[j] % 10) {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
            if (a[i] % 10 == a[j] % 10) {
                if ((a[i]/10) % 10 > (a[j]/10)%10) {
                    int t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
            }
        }
    }
    for (int i = 0; i < n; i++) printf ("%d ", a[i]);
}
/**
9
12 223 10 4345 189 9 455 61 82
**/