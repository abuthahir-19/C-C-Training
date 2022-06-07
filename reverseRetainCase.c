#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int isLowerCase (char ch) {
    if (ch >= 'a' && ch <= 'z') return 1;
    else return 0;
}

int isUpperCase (char ch) {
    if (ch >= 'A' && ch <= 'Z') return 1;
    else return 0;
}

void reverseStringRetainCase (char *str) {
    int start = 0, i;
    for (i = 0; i < strlen(str); i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            int length = abs(start - i), end = i-1;
            for (int k = start; k < (start + (length/2)); k++) {
                char t = str[k];
                if (isLowerCase (str[k])) {
                    if (isLowerCase (str[end])) {
                        str[k] = str[end];
                        str[end] = t;
                    }
                    else if (isUpperCase (str[end])) {
                        str[k] = tolower(str[end]);
                        str[end] = toupper (t);
                    }
                }
                else if (isUpperCase (str[k])) {
                    if (isUpperCase (str[end])) {
                        str[k] = str[end];
                        str[end] = t;
                    }
                    else if (isLowerCase (str[end])) {
                        str[k] = toupper (str[end]);
                        str[end] = tolower (t);
                    }
                }
                end--;
            }
            start = i+1;
        }
    }
    i-=1;
    int length = abs (start - (strlen(str)-1));
    for (int k = start; k < (start + (length/2)); k++) {
        char t = str[k];
        if (isLowerCase (str[k])) {
            if (isLowerCase (str[i])) {
                str[k] = str[i];
                str[i] = t;
            }
            else if (isUpperCase (str[i])) {
                str[k] = tolower (str[i]);
                str[i] = toupper (t);
            }
        }
        else if (isUpperCase (str[k])) {
            if (isUpperCase (str[i])) {
                str[k] = str[i];
                str[i] = t;
            }
            else if (isLowerCase (str[i])) {
                str[k] = toupper (str[i]);
                str[i] = tolower (t);
            }
        }
        i--;
    }
}

int main()
{
    char str[1001];
    scanf ("%[^\n]%*c", str);
    reverseStringRetainCase (str);
    if (str[0] == ' ' || str[0] == '\0') {
        printf ("String is empty !!");
    }
    printf ("%s", str);
}

/**
GoogleChrome FireFox MicrosoftEdge
 */