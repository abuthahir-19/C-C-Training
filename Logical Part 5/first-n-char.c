#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool isPresentBoth (char *str1, char *str2, char ch, int index) {
    for (int i = 0; i < strlen(str2); i++) {
        if (str2[i] == ch) {
            str2[i] = '.';
            str1[index] = '.';
            return true;
        }
    }
    return false;
}

int main()
{
    char str1[1001], str2[1001];
    int n, len = 0;
    char occured[n];
    scanf ("%s\n%s\n%d", str1, str2, &n);
    for (int i = 0; i < strlen(str1); i++) {
        char ch = str1[i];
        bool value = isPresentBoth (&str1, &str2, str1[i], i);
        bool flag = false;
        if (value) {
            for (int j = 0; j < len; j++) {
                if (occured[j] == ch) {
                    flag = true;
                    break;
                }
            }
            if (!flag) {
                occured[len++] = ch;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf ("%c", occured[i]);
    }
    return 0;
}


/***
abcbde 
cdefghbb 
3
***/