#include <stdio.h>
#include <stdlib.h>

int length (int n) {
    int c= 0;
    while (n != 0) {
        c++;
        n /= 10;
    }
    return c;
}

int main () 
{
    int n;
    scanf ("%d", &n);
    int a[10] = {1, 0, 0 , 0, 1, 0, 1, 0, 2, 1};
    int result[1001], k = 0;

    for (int i = 1; i <= n; i++) {
        int dig = length (i);
        if (dig == 1) {
            int holes = a[i];
            if (holes >= 1) result[k++] = i;
        }

        else if (dig == 2) {
            int sum = 0, val = i;
            while (val != 0) {
                sum += a[val%10];
                val /= 10;
            }
            if (sum >= 2) result[k++] = i;
        }

        else if (dig == 3) {
            int sum = 0, val = i;
            while (val != 0) {
                sum += a[val%10];
                val/=10;
            }
            if (sum >= 3) result[k++] = i;
        }

        else if (dig == 4) {
            int sum = 0, val = i;
            while (val != 0) {
                sum += a[val % 10];
                val /= 10;
            }
            if (sum >= 4) result[k++] = i;
        }
    }
    for (int i = 0; i < k; i++) printf ("%d ", result[i]);

    return 0;
}


/**
50
4 6 8 9 18 28 38 40 44 46 48 49


300
4 6 8 9 18 28 38 40 44 46 48 49 58 60 64 66 68 69 78 80 81 82 
83 84 85 86 87 88 89 90 94 96 98 99 108 148 168 180 184 186 188
189 198 208 248 268 280 284 286 288 289 298
**/