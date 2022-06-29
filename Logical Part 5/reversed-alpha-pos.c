#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[1001];
    scanf ("%s", str);
    for (int i = 0; i < strlen (str); i++) {
        if (islower (str[i])) {
            printf ("%c", ('z' - str[i]) + 97);
        }
        else if (isupper (str[i])) {
            printf ("%c", ('Z' - str[i]) + 65);
        }
    }
    return 0;
}


/****
abc 


Yarn

****/