#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int printLCM (int num1, int num2) {
    int max = (num1 > num2) ? num1 : num2;
    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            return max;
        }
        ++max;
    }
}

int main () 
{
    int n1, n2;
    scanf ("%d %d", &n1, &n2);
    int lcm = printLCM (n1, n2);
    printf ("%d", lcm);
    return 0;
}

/**

*/