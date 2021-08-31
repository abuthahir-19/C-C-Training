#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int indexOfDot (char str[]) {
    for (int i = 0; i < strlen (str); i++) {
        if (str[i] == '.') {
            return i;
        }
    }
}

int main () 
{
    char str[1001], first[500], second[500];
    int k = 0, v = 0;
    scanf ("%s", str);
    int dot = indexOfDot (str);
    for (int i = 0; i < dot; i++) {
        first[k++] = str[i];
    }
    first[k] = '\0';
    for (int i = dot+1; i < strlen (str); i++) {
        second[v++] = str[i];
    }
    second[v] = '\0';

    double powers = pow (10, k-1);
    //for the parts before decimal point 
    for (int i = 0; i < k; i++) {
        int dig = first[i]-'0', mul = (int) powers;
        printf ("%d ", dig*mul);
        powers = powers/10;
    }

    //for the digits next to decimal point
    int d = 10;
    for (int i = 0; i < v; i++) {
        int digit = second[i]-'0';
        if (digit == 0) {
            printf ("%d ", digit);
        }
        else printf ("%d/%d ", second[i]-'0', d);
        d *= 10;
    }
    return 0;
}


/**
68.12
60 8 1/10 2/100


25005.9089
20000 5000 0 0 5 9/10 0 8/1000 9/10000


1000.0001
1000 0 0 0 0 0 0 1/10000
**/