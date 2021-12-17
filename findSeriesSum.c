#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int isBinary (char *value) {
    for (int i = 0; i < strlen(value); i++) {
        if (!(value[i] == '0' || value[i] == '1')) return 0;
    }
    return 1;
}

int includesSpace (char *str) {
    for (int i = 0; i < strlen (str); i++) {
        if (str[i] == ' ') return 1;
    }
    return 0;
}

long int power (int base, int exp) {
    int result = 1;
    while (exp != 0) {
        result *= base;
        --exp;
    }
    return result;
}

int toBinary (char *value) {
    int d = 0, p = 0, rem;
    for (int i = strlen (value) -1 ; i >= 0; i--) {
        rem = value[i] - '0';
        d = d + (rem * (power (2, p)));
        p++;
    }
    return d;
}

int findSeriesSum (char *str) {
    int sum = 0;
    if (includesSpace (str)) {
        char *token = strtok (str, " ");
        while (token != NULL) {
            if (isBinary (token)) {
                sum += toBinary (token);
            }
            else sum += atoi (token);
            token = strtok (NULL, " ");
        }
    }
    else {
        sum += toBinary (str);
    }
    return sum;
}

int main ()
{
    char str[1001];
    scanf ("%[^\n\r]", str);
    printf ("%d", findSeriesSum (str));
    // printf ("%d",toBinary ("1010"));
    return 0;
}

/**
45 32 1010 5 10111 60


10 111 1005 1114 101


1010011001010110
**/