#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int checkOrder (char sub[], int size) {
    for (int i = 0; i < size-1; i++) {
       if((sub[i]-'a' +1) > (sub[i+1]-'a'+1)) {
           return 0;
       }
    }
    return 1;
}

int main ()
{
    char str[1001]; int n;
    scanf ("%s %d", str, &n);
    int t = n;
    for (int i = 0; i < strlen(str); ) {
        char subStr[n], len = 0;
        for (int j = i; j < t; j++) {
            subStr[len++] = str[j];
            i++;
        }
        subStr[len] = '\0';
        int rv = checkOrder(subStr, len);
        printf ("%s %d\n", subStr, rv);
        t+=n;
    }
    return 0;
}


/**
bracket 2 
**/