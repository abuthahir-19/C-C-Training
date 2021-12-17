#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* reverse (char *str) {
    char *revString = (char*)malloc(sizeof(char));
    int len = 0;
    for (int i = strlen (str)-1; i >= 0; i--) {
        revString[len++] = str[i];
    }
    return revString;
}

int main ()
{
    int n, len = 0;
    scanf ("%d", &n);
    char str[1001][101], chars[1001];
    printf ("Enter the string values : \n");
    for (int i = 0; i < n; i++) {
        scanf ("%s", str[i]);
        chars[i] = str[i][0];
    }
    printf ("String values : \n");
    for (int i = 0; i < n-1; i++) {
        char ch = chars[i], found = 0;
        for (int j = i+1; j < n-1; j++) {
            if (chars[j] != ch) {
                printf ("%s \n", reverse(str[j]));
                found = 1;
                break;
            }
        }
        if (!found) {
            printf ("%s \n", str[i]);
        }
    }
    return 0;
}