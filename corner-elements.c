#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char str[101];
    int len = 0, ctr = 0;
    scanf ("%[^\n\r]%*c", str);
    char newString[101][500];
    for (int i = 0; i < strlen (str); i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            newString[ctr][len] = '\0';
            ctr++;
            len = 0;
        }
        else {
            newString[ctr][len] = str[i];
            len++;
        }
    }
    printf ("Output : \n");
    int sum = 0;
    for (int i = 0; i <= ctr; i++) {
        sum += atoi(newString[i]);
    }
    char buffer[20];
    snprintf (sum, 20, "%s", buffer);
    printf ("%s", buffer);
    return 0;
}