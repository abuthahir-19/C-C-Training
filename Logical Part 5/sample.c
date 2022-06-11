#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
    char val = '5';
    bool res = isdigit (val);
    printf ("%d", res);
}