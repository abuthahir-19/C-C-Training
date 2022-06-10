#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[101];
    scanf ("%s", str);
    int x = 0, y = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'z') x += 1;
        else y += 1;
    }
    if (((2 * x) == y)) printf ("Yes");
    else printf ("No");
    return 0;
}