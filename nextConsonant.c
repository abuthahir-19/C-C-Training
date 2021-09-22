#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isVowel (char ch) {
    char vowel[] = "aeiouAEIOU";
    for (int i = 0; i < strlen(vowel); i++) {
        if (ch == vowel[i]) {
            return 1;
        }
    }
    return 0;
}

char getNextConsonant (char ch) {
    if (ch >= 'a' && ch <= 'z') {
        char nextChar;
        if (ch == 'z') {
            nextChar = 'a';
        }
        else nextChar = ch;
        int vow = isVowel(ch);
        if (vow) {
            vow = isVowel(++nextChar);
            while (vow) {
                nextChar++;
                vow = isVowel(nextChar);
            }
            return nextChar;
        }
        else {
            vow = isVowel(++nextChar);
            while (vow) {
                nextChar++;
                vow = isVowel(nextChar);
            }
            return nextChar;
        }
    }
    else if (ch >= 'A' && ch <= 'Z') {
        char nextChar;
        if (ch == 'Z') {
            nextChar = 'A';
        }
        int vow = isVowel(ch);
        if (vow) {
            vow = isVowel (++nextChar);;
            while (vow) {
                nextChar++;
                vow = isVowel (nextChar);
            }
            return nextChar;
        }
        else {
            vow = isVowel (++nextChar);;
            while (vow) {
                nextChar++;
                vow = isVowel(nextChar);
            }
            return nextChar;
        }
    }
}

int main () 
{
    char ch ;
    scanf ("%c", &ch);
    printf ("%c", getNextConsonant(ch));
    return 0;
}