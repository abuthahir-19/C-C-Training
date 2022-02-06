#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int removeAlphabetsEvaluateExp (char *str) {
    char *numberExp = malloc (sizeof(char) * strlen(str));
    int len = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') {
            numberExp[len++] = str[i];
        }
        else if (str[i] >= '0' && str[i] <= '9') {
            numberExp[len++] = str[i];
        }
    }
    numberExp[len] = '\0';
    for (int i = 0; i < len; i++) {
        char beforeExp[101], afterExp[101]; int k1 = 0, k2 = 0;
        char ch = numberExp[i];
        if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            int start = i, end = i;
            for (;(numberExp[start] != '+' || numberExp[start] != '-' || numberExp[start] != '*' || numberExp[start] != '/' || start >= 0); start--) {
                beforeExp[k1++] = numberExp[start];
            }
            for (;(numberExp[end] != '+' || numberExp[end] != '-' || numberExp[end] != '*' || numberExp[end] != '/') && end < len; end++) {
                afterExp[k2++] = numberExp[end];
            }
            int a = atoi(beforeExp), b = atoi(afterExp);
            printf ("%d %d\n", a, b);
        }
    }
    return 0;
}
int main ()
{
    char str[10001];
    scanf ("%s", str);
    printf ("%d", removeAlphabetsEvaluateExp (str));
    return 0;
}

/***
ab4cd+e2f0g-hi5hello*how3are-1you

***/