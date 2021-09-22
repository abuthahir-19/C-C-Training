#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () 
{
    int x, prime = 1;
    scanf ("%d", &x);

    if (x > 1) {
        for (int i = 2; i*i <= (x); i++) {
            if (x % i == 0) {
                prime = 0;
                break;
            }
        }
        
        if (prime) printf ("prime");
        else {
            if (x % 2 == 0) printf ("even");
            else printf ("Odd");
        }
    }
    else {
        if (x % 2 == 0) printf ("even");
        else printf ("odd");
    }
    return 0;
}