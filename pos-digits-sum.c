#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i <= 20;) {
        printf ("%d ", i % 10);
        i++;
        if (i % 10 == 0) printf ("\n");
    }
    return 0;
}