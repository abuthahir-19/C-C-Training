#include <stdio.h>
#include <stdlib.h>

int evenCount (int a, int b, int c) {
    int ec= 0;
    if (a % 2 == 0 && a > 0) ec++;
    if (b % 2 == 0 && b > 0) ec++;
    if (c % 2 == 0 && c > 0) ec++;
    return ec;
}

int jewelCount (int a, int b, int c) {
    int jc= 0;
    if (a < 0) jc++;
    if (b < 0) jc++;
    if (c < 0) jc++;
    return jc;
}
int main ()
{
    int a, b, c;
    scanf ("%d %d %d", &a, &b, &c);
    int e = evenCount (a, b, c);
    int jwe = jewelCount (a, b, c);

    printf ("%d %d\n",e, jwe);
    if (e >= 2) {
        printf ("YES");
    }
    else if (e == 1 && jwe > 0) {
        printf ("YES");
    }
    else{
        printf ("NO");
    }
}

/**
24 25 64


54 79 -2

-5 -9 9
**/