#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* removeUpperRepeatLower (char str[]) {
    char *modStr = malloc(sizeof(char));
    int len = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            if (str[i-1] >= 'a' && str[i-1] <= 'z') {
                memmove (&str[i], &str[i+1], strlen(str)-i);
                modStr[len++] = str[i-1];
            }
            else continue;
        }
        if (str[i] >= 'a' && str[i] <= 'z') {
            modStr[len++] = str[i];
        }
    }
    modStr[len] = '\0';
    printf ("%s\n", str);
    return modStr;
}

int main ()
{
    char str[1001];
    scanf ("%s", str);
    char *newStr = removeUpperRepeatLower (str);
    if (strlen(newStr) == 0) {
        printf ("-1");
    }
    else printf ("%s", newStr);
    return 0;
}