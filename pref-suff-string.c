#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int indexOfChar (char str[], char ch) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            return i;
        }
    }return -1;
}

int indexOfCharRev (char str[], char ch) {
    for (int i = strlen(str)-1; i >= 0; i--) {
        if (str[i] == ch) return i;
    }
    return -1;
}

void checkForPrefixAndSuffix (char str[], char pref[], char suff[]) {
    int count1 = 0, count2 = 0, k = strlen(suff)-1;
    char fullString[] = "srackkcars";
    for (int i = 0; i < strlen (pref); i++) {
        if (str[i] == pref[i]) count1++;
    }
    for (int i = strlen(str)-1; i >=(strlen(str)-strlen(suff)); i--) {
        if (str[i] == suff[k--]) count2++;
    }
    if (count1+count2 == strlen(fullString)) {
        printf ("YES");
    }else printf ("NO");
}

void reorder (char str[], char prefix[], char suffix[]) {
    int v = strlen(suffix)-1;
    for (int i = 0; i < strlen(prefix); i++) {
        if (str[i] != prefix[i]) {
            int ind = indexOfChar(str, prefix[i]);
            if (ind != -1) {
                char t = str[i];
                str[i] = str[ind];
                str[ind] = t;
            }
            else {
                printf ("NO");
                return ;
            }
        }
    }

    for (int i = strlen(str)-1; i >= (strlen(str)-strlen(suffix)); i--) {
        if (str[i] != suffix[v]) {
            int ind = indexOfCharRev (str, suffix[v]);
            if (ind != -1) {
                char t = str[i];
                str[i] = str[ind];
                str[ind] = t;
            }
            else {
                printf ("NO");
                return;
            }
        }v--;
    }
    checkForPrefixAndSuffix(str, prefix, suffix);
}
int main ()
{
    char str[101];
    scanf ("%s", str);
    char fullString[] = "srackkcars",
    prefix[] = "srack", suffix[] = "kcars";
    if (strcmp (str, fullString) == 0) {
        printf ("NO");
    }
    else {
        int count1 = 0, count2 = 0, k = strlen(suffix)-1;
        for (int i = 0; i < strlen (prefix); i++) {
            if (str[i] == prefix[i]) count1++;
        }
        for (int i = strlen(str)-1; i >=(strlen(str)-strlen(suffix)); i--) {
            if (str[i] == suffix[k--]) count2++;
        }
        if (count1+count2 == strlen(fullString)) {
            printf ("YES");
        }
        else {
            reorder (str, prefix, suffix);
        }
    }
    return 0;
}

/**
krcsarraecksad


srackkcars


sracklearnkcars


readlearnrackskscar
**/