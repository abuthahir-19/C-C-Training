#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* removeDotAndReturn (char *str) {
    char *newStr = malloc(sizeof(char) * strlen(str));
    int len = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '.') 
        continue;
        else newStr[len++] = str[i];
    }
    newStr[len] = '\0';
    return newStr;
}

int isPalindrome (char *str) {
    int len = strlen(str)-1;
    for (int i = 0; i < strlen(str) / 2; i++) {
        if (str[i] != str[len--]) {
            return 0;
        }
    }
    return 1;
}

char* replaceDotAndReturn (char *str) {
    int index = 0;
    char* newStr = malloc(sizeof(char) * strlen(str));
    int len = 0;
    for (int i = strlen(str)-1; i >= 0; i--) {
        if (str[i] == '.') {
            str[i] = str[index];
            break;
        }
        index++;
    }
    for (int i = 0; i < strlen(str); i++) {
        newStr[len++] = str[i];
    }
    newStr[len] = '\0';
    return newStr;
}

int main ()
{
    char str[1001];
    scanf ("%s", str);
    char* strWithoutDot = removeDotAndReturn (str);
    char* strReplaceDot = replaceDotAndReturn (str);

    if(isPalindrome(strWithoutDot)) {
        printf ("%s", strWithoutDot);
    }
    else if (isPalindrome (strReplaceDot)) {
        printf ("%s", strReplaceDot);
    }
    else printf ("-1");
    return 0; 
}