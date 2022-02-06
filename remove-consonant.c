#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isVowel (char ch) {
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'
     || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        return 1;
    }
    else return 0;
}

int main () 
{
    char str[1001];
    scanf ("%s", str);
    char modified[1001];
    int len = 0;

    for (int i = 0; i < strlen(str)-1; i++) {
        char cur = str[i], next = str[i+1];
        if (isVowel (cur) && isVowel (next)) {
            continue;
        }
        else if (!isVowel (cur) && !isVowel (next)) {
            continue;
        }
        else {
            modified[len++] = str[i];
        }
    }
    modified[len++] = str[strlen(str)-1];
    modified[len] = '\0';
    printf ("%s", modified);
    return 0;
}

/**
cheNnAi


continuous
*/