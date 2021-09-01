#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int mc, n;
    scanf ("%d %d", &mc, &n);
    int inc = 5, totalRevenue = 0;
    for (int i = 0; i < n; ) {
        for (int j = i; j < inc && j < n; j++) {
            if ((j+1) >= 1 && (j+1) <= 5) {
                totalRevenue += 100;
            }
            else if ((j+1) >= 6 && (j+1) <= 50) {
                totalRevenue += 150;
            }
            else if ((j+1) >= 51 && (j+1) <= 500) {
                totalRevenue += 200;
            }
            else if ((j+1) >= 501) {
                totalRevenue += 250;
            }
            i++;
        }
        inc = inc * 10;
    }
    if (totalRevenue == mc) {
        printf ("BreakEven");
    }
    else if (totalRevenue > mc) {
        printf ("Profit");
    }
    else if (totalRevenue < mc) {
        printf ("Loss");
    }
    return 0;
}