#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () 
{
    char str[1001];
    char newString[101][101];
    scanf ("%[^\n]%*c", str);
    int i, j, ctr;
    j = 0, ctr = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            newString[ctr][j] = '\0';
            ctr++;
            j = 0;
        }
        else {
            newString[ctr][j] = str[i];
            j++;
        }
    }
    int found = 0;
    printf ("\nOutput :\n");
    for (int i = 0; i <= ctr; i++) {
        if (strcmp ("an", newString[i]) == 0) continue;
        if (strcmp ("the", newString[i]) == 0) continue;
        if (strcmp ("a", newString[i]) == 0) continue;
        printf ("%s ", newString[i]); 
        found = 1;
    }
    if (found == 0) printf ("-1");
    return 0;
}

/**
sometimes an adjective comes between the article and noun.

a an the an
*/