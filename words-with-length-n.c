#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () 
{
    char str[1001];
    int n, printed = 0;
    scanf ("%[^\n]%*c", str);
    fflush(stdin);
    scanf("%d", &n);
    for (int i = 0; i < strlen(str); i++) {
        int count = 0, k = 0;
        char newStr[101];
        for (int j = i; j < strlen(str); j++) {
            if (str[j] == ' ' || str[i] == '\r')break;
            else {
                newStr[k++] = str[j];
                count++;
                i++;
            }
        }
        newStr[k] = '\0';
        if (count == n) {
            printf ("%s ", newStr);
            printed = 1;
        }
    }
    if (printed == 0) printf("-1");
    return 0;   
}

/***
Have a good day
4


help th need
2

if ((checkForSpaceAfterFullStopAndComma(str))
    &&  (checkForSpaceBefFullStopAndComma (str))
    &&  (lowerCaseAfterComma(str))
    &&  (upperCaseAfterFullStop(str))) {
        printf ("VALID");
    }
    else {
        printf ("INVALID");
    }
 **/