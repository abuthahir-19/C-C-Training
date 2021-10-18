#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *moveLowerUpperCase (char *str) {
    int n = strlen(str), len1 = 0, len2 = 0, len3 = 0;
    char *lower = (char*)malloc(sizeof(char)*n);
    char *number = (char*)malloc(sizeof(char) *n);
    char *upper = (char*)malloc(sizeof(char)*n);
    for (int i = 0; i < n; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
        lower[len1++] = str[i];
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            upper[len2++] = str[i];
        }
        else if (str[i] >= '0' && str[i] <= '9') {
            number[len3++] = str[i];
        }
    }
    lower[len1]= '\0';
    number[len3] = '\0';
    upper[len2] = '\0';
    strcat(lower, number);
    strcat(lower, upper);
    return lower;
}
int main ()
{
    char str[10001];
    scanf ("%s", str);
    char *ptr = moveLowerUpperCase (str);
    printf ("%s", ptr);
    return 0;
}


/**
5OranGesAretheRe


5Tiger2OWL3ox1Lion6FOX
**/