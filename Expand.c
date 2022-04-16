#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isChar (char ch) {
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) return 1;
    else return 0;
}

int main()
{
    char str[101];
    scanf ("%s", str);
    char f = str[0];
    for (int i = 1; i < strlen(str); i++) {
        char num[1001]; int k = 0;
        for (int j = i; !isChar(str[j]); j++) {
            num[k++] = str[j];
            i++;
        }
        num[k] = '\0';
        int val = atoi (num);
        for (int x = 0; x < val; x++) {
            printf ("%c", f);
        }
        f = str[i];
    }
    return 0;
}

/**
a2c5z4
 */