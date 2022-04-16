#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int areConsecutive (char *str) {
    char f[101], s[101];
    int l1 = 0, l2 = 0;
    for (int i = 0; i < strlen(str)/2; i++) {
        f[l1++] = str[i];
    }
    f[l1] = '\0';
    for (int i = strlen(str)/2; i < strlen(str); i++) {
        s[l2++] = str[i];
    }
    s[l2] = '\0';
    int a = atoi (f), b = atoi (s);
    if (a < b) {
        if (a == b-1) return 1;
        else return 0;
    }
    else if (a > b) {
        if (a == b+1) return 1;
        else return 0;
    }
}

int main()
{
    char str[1001];
    scanf ("%s", str);
    printf ("%d", areConsecutive (str));
    return 0;
}