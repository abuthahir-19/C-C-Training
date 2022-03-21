#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() 
{
    int n;
    scanf ("%d", &n);
    int sq = pow (n, 2);
    char buff[1001];
    sprintf (buff, "%d", sq);
    for (int i = 0; i < strlen(buff); i++) {
        char f[101], s[101];
        int l1 = 0, l2 = 0;
        for (int j = 0; j <= i; j++) {
            f[l1++] = buff[j];
        }
        for (int k = i+1; k < strlen(buff); k++) {
            s[l2++] = buff[k];
        }
        f[l1] = '\0';
        s[l2] = '\0';
        int a = atoi (f), b = atoi (s);
        if (a + b == n) {
            printf ("Yes");
            return 0;
        }
    }
    printf ("No");
    return 0;
}