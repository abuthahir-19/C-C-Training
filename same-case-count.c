#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isNotACharacter (char ch) {
    if (!(ch >= 'a' && ch <= 'z') && !(ch >= 'A' && ch <= 'Z')) 
        return 1;
    else return 0;
}

int upperCount (char* str) {
    int u = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') u++;
        else if (isNotACharacter (str[i])) u++;
    }
    return u;
}

int lowerCount (char* str) {
    int l = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') l++;
        else if (isNotACharacter (str[i])) l++;
    }
    return l;
}

int main () 
{
    int n, count = 0;
    scanf ("%d", &n);
    int str[n][1001];
    for (int i = 0; i < n; i++) {
        scanf ("%s", str[i]);
    }
    
    for (int i = 0; i < n; i++) {
        char* subString = str[i];
        if (upperCount (subString) == strlen(str[i]) || lowerCount (subString) == strlen(str[i])) count++;
    }
    printf ("%d", count);
    return 0;
}

/**
4
hello
StanD
TASK
Fun


5
TIME
watch
le@p#rd
wireS
d@olphin
*/