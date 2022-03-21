#include <stdio.h>

int main()
{
    int c[] = {5, 0, 3, 4, 5};
    int j, *p = c;
    for (j = 0; j < *p; j++) {
        printf ("%d", *p);
        ++p;
    }
}