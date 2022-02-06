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

void removeVowelConsonant (char *str) {
    char newStr[1001]; int len = 0;
    for (int i = 0; i < strlen(str); i++) {
        char ch1 = str[i], ch2 = str[i+1];
        if ((isVowel(ch1) && isVowel(ch2)) ||
            (!isVowel(ch1) && !isVowel(ch2))) {
            newStr[len++] = ch2;
            i++;
        }
        else {
            newStr[len++] = ch1;
            newStr[len++] = ch2;
        }
    }
    newStr[len] = '\0';
    printf ("%s", newStr);
}

int main ()
{
    char str[1001];
    scanf ("%s", str);
    removeVowelConsonant (str);
    return 0;
}