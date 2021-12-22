#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isVowel (char ch) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            return 1;
    }
    else return 0;
}

int main ()
{
    char str[1001];
    scanf ("%s", str);
    int max = -1;
    for (int i = 0; i < strlen(str); i++) {
        int count = 0;
        for (int j = i; j < strlen(str); j++) {
            if (isVowel (str[j])) {
                count++;
            }
            else break;
        }
        if (count > max) {
            max = count;
        }
    }
    printf ("%d", max);
    return 0;
}