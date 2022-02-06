#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* binRep (int x) {
    char* bin = malloc(sizeof (char) * 100);
    int len = 0;
    while (x != 0) {
        bin[len++] = x % 2 + '0';
        x /= 2;
    }
    bin[len] = '\0';
    return bin;
}

int findMissingBit (char *str, int x) {
    char* binOfX = binRep (x);
    int index = 0;
    for (int i = strlen (binOfX)-1; i >= 0; i--) {
        if (binOfX[i] == str[index]) continue;
        else {
            return binOfX[i] - '0';
        }
        index++;
    }
}
int main () 
{
    int n;
    scanf ("%d", &n);
    char str[101][1001];
    for (int i = 0; i < n; i++) {
        scanf ("%s", str[i]);
    }
    
}