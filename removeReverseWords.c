#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isEqual (char* src, char* dest) {
    int count = 0;
    int idx = 0;
    for (int i = 0; i < strlen(src); i++) {
        if (src[i] == ' ') continue;
        else {
            if (src[i] == dest[idx++]) count++;
        }
    }
    if (count == strlen(dest)) return 1;
    else return 0;
}

char* reverse (char *str) {
    char *rev = (char*)malloc(sizeof(char) * strlen(str));
    int len = 0;
    for (int i = strlen(str)-1; i >= 0; i--) {
        rev[len++] = str[i];
    }
    rev[len] = '\0';
    return rev;
}

char* removeReversedWords (char *str1, char *str2) {
    char newString[101][101];
    int j = 0, ctr = 0;
    char *result = (char*)malloc(sizeof(char) * 1001);
    int len = 0;
    for (int i = 0; i < strlen(str1); i++) {
        if (str1[i] == ' ' || str1[i] == '\0') {
            newString[ctr][j] = str1[i];
            ctr++;
            j = 0;
        }
        else {
            newString[ctr][j] = str1[i];
            j++;
        }
    }
    for (int i = 0; i <= ctr; i++) {
        char *word = newString[i];
        char *rev = reverse (newString[i]);
        if (isEqual (word, str2) == 1 || isEqual (rev, str2) == 1) {
            continue;
        }
        else {
            for (int i = 0; i < strlen(word); i++) {
                result[len++] = word[i];
            }
        }
    }
    if (len == 0) return "-1";
    else return result;
}

int main()
{
    char str1[1001], str2[1001];
    scanf ("%[^\n]%*c\n%s", str1, str2);
    char* result = removeReversedWords (str1, str2);
    printf ("%s", result);
    return 0;
}

/**
nightingale lion tiger mosquito noil cockroach lion fox panda lizard
lion

monkey monkey yeknom monkey yeknom
yeknom
**/