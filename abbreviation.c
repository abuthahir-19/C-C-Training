#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* getAbbreviation (char* str) {
    char* abb = (char*)malloc(sizeof(char));
    int  k = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (i == 0) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                abb[k++] = str[i] - 32;
            }else abb[k++] = str[i];
        }
        
        if (str[i] == ' ') {
            char pushVal ;
            if (str[i+1] >= 'a' && str[i+1] <= 'z') {
                pushVal = str[i+1]-32;
                abb[k++] = pushVal;
            }
            else abb[k++] = str[i+1];
        }
    }
    abb[k] = '\0';
    return abb;
}

int main () 
{
    char str[101];
    scanf ("%[^\n]%*c", str);
    char *abb = getAbbreviation (str);
    printf ("%s", abb);
    return 0;
}