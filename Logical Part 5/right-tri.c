#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int a, b, c;
    scanf ("%d %d %d", &a, &b, &c);
    bool flag = false;

    if (pow (a, 2) == (pow (b, 2) + pow (c, 2))) {
        flag = true;
    }
    else if ((pow (a, 2) + pow (b, 2)) == pow (c, 2)) {
        flag = true;
    }
    else if ((pow (a, 2) + pow (c, 2)) == pow (b, 2)) {
        flag = true;
    }

    if (flag) printf ("yes");
    else printf ("no");
    return 0;
}