#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int ascii (char ch) {
    return ch;
}

long long int binToDeciaml (int bin) {
    int dec = 0, i = 0;
    while (bin != 0) {
        dec = dec + (bin % 10 * pow (2, i));
        i++;
        bin /= 10;
    }
    return dec;
}

void stringToDecimal (char str[]) {
    unsigned long long int bin = 0;
    for (int i = 0; i < strlen(str); i++) {
        int val = ascii(str[i]);
        if (val % 2 == 0) {
            bin = bin * 10 + 0;
        }
        else {
            bin = bin * 10 + 1;
        }
        printf ("%llu ", bin);
    }
    // printf ("%llu", bin);
    // return binToDeciaml (bin);
}

int main ()
{
    char str[1001];
    scanf ("%[^\n]%*c", str);
    // printf ("%d", strlen(str));
    // long long int decimal = 
    stringToDecimal (str);
    // printf ("%llu", decimal);
    return 0;
}

/**
Moon


XYZXYZXYZXYZXYZXYZXYZXYZXYZXYZXYZXYZXYZXYZXYZ
**/