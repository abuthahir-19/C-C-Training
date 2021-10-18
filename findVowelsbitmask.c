#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int isVowel (char ch) {
    if ((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    || (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')) {
        return 1;
    }
    else return 0;
}

int decimal (int bin) {
    int d = 0, i = 0;
    while (bin != 0) {
        d = d + ((bin%10) * pow(2, i));
        i++;
        bin /= 10;
    }
    return d;
}

int findVowelsBitMask (char str[]) 
{
    char presentVowels[1001], vowel[] = "uoiea"; int len = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (isVowel (str[i])) {
            presentVowels[len++] = tolower(str[i]);
        }
    }
    for (int i = 0; i < strlen(vowel); i++) {
        char ch = vowel[i], found = 0;
        for (int j = 0; j < len; j++) {
            if (ch == presentVowels[j]) {
                found = 1;
                break;
            }
        }
        if (found == 1) {
            vowel[i] = '1';
        }
        else vowel[i] = '0';
    }
    return decimal(atoi(vowel));
}

int main ()
{
    char str[1001];
    scanf ("%s", str);
    printf ("%d", findVowelsBitMask (str));
    return 0;
}

/**
SkillRack


Archaeologist
**/