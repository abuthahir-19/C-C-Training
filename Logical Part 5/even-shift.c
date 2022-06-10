#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[1001], pat[1001];
    scanf ("%s\n%s", str, pat);
    int patLen = strlen(pat);
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        char temp[1001];
        int t = 0;
        for (int j = i; j < i+patLen; j++) {
            temp[t++] = str[j];
        }
        temp[t] = '\0';
        if (strcmp (temp, pat) == 0) count += 1;
    }
    printf ("%d", count);
    return 0;
}


/***
eyeyeyeeyeyeeye
eye
**/