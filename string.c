#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap (char **str1, char **str2) {
    char *t = *str1;
    *str1 = *str2;
    *str2 = t;
}

int main ()
{
    int n, found = -1;
    scanf ("%d", &n);
    char str[n][1001];
    for (int i = 0; i < n; i++) {
        scanf ("%s \n", str[i]);
    }
    printf ("String inputs : \n");
    for (int i = 0; i < n; i++) {
        char lastChar = str[i][strlen(str[i])-1],
        firstChar = str[i][0];
        int found = -1, found2 = -1;
        for (int j = 0; j < n; j++) {
            if (j != i) {
                if (lastChar == str[j][0]) {
                    found = j;
                }
                if (firstChar == str[j][strlen(str[j])-1]) {
                    found2 = j;
                }
            }
        }
        if (found == -1) {
            swap (&str[i], &str[n-1]);
        }
        if (found2 == -1) {
            swap (&str[i], &str[0]);
        }
    }
    for (int i = 0; i < n-1; i++) {
        char lastChar = str[i][strlen(str[i])-1];
        int found = -1;
        for (int j = i+1; j < n-1; j++) {
            if (lastChar == str[j][0]) {
                found = j;
                break;
            }
        }
        if (found != -1) {
            swap (&str[i+1], &str[found]);
        }
    }
    for (int i = 0; i < n; i++) {
        printf ("%s\n", str[i]);
    }
}

/**
4
niche
manager
lemon
emblem
**/