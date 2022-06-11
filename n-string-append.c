#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    scanf ("%d", &n);
    char str[n][51];
    for (int i = 0; i < n; i++) {
        char s[51]; int j;
        scanf ("%s", s);
        for (j = 0; j < strlen(s); j++) {
            str[i][j] = s[j];
        }
        str[i][j] = '\0';
    }
    for (int i = n-1; i >= 0; i--) {
        printf ("%s", str[i]);
    }
    return 0;
}

/***
3
apple
boy
cat
***/