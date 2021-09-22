#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int checkOrder (char sub[], int start, int end) {
    for (int i = start; i < end-1; i++) {
        if (sub[i] > sub[i+1]) return 0;
    }
    return 1;
}

int main ()
{
    char str[1001]; int n;
    scanf ("%s %d", str, &n);
    int t = n;
    for (int i = 0; i < strlen(str); i++) {
       int rv = checkOrder (str, i, t);
        if (rv) {
            for (int j = i; j < t; j++) {
                printf ("%c", str[j]);
            }printf (" ");
        }
        t++;
    }
    return 0;
}


/**
bracket 2

boomerang 3
**/