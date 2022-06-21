#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool isVowel (char ch) {
    char val = tolower (ch);
    if (val == 'a' || val == 'e' || val == 'i' || val == 'o' || val == 'u') return true;
    else return false;
}

int main()
{
    char str[101];
    scanf ("%s", str);
    int index, len = strlen(str)-1;
    for (int i = len; i >= 0; i--) {
        if (isVowel (str[i])) {
            index = i;
            break;
        }
    }

    for (int i = index; i >= 0; i--) {
        printf ("%c", str[i]);
    }
    for (int i = index + 1; i < strlen (str); i++) {
        printf ("%c", str[i]);
    }
    return 0;
}