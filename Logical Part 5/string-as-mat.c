#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int main()
{
    char str[501];
    int c;
    scanf ("%s\n%d", str, &c);
    char mat[c][c];
    int ind = 0, row = 0;
    for (int i = 0; i < strlen(str); i++) {
        printf ("%c", str[i]);
        if ((i+1) % c == 0) {
            printf ("\n");
        }
    }
    return 0;
}

/***
abcdefghijklmnop
6
***/