#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, len = 0, step = 0;
    scanf ("%d", &n);
    char str[n];
    for (int i = 0; i < n; i++) {
        char ch[2];
        scanf ("%s", ch);
        if (ch[0] == 'G') {
            str[len++] = ch[0];
        }
    }
    for (int i = 0; i < len-1; i++) {
        step += 1;
    }
    printf ("%d", step);
    return 0;
}

/***
7
G G B G G B G

4
G B G G
****/