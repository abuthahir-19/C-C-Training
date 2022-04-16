#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int calSentenceValue (char *str) {
    int sum = 0;
    for (int i = 0; i < strlen(str); i++) {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            ch = tolower (ch);
            sum = sum + (ch - 'a' + 1); 
        }
        else if (ch >= '0' && ch <= '9') {
            sum = sum + (ch - '0');
        }
        else sum += 0;
    }
    return sum; 
}

int isPrime (int value) {
    if (value > 1) {
        for (int i = 2; i*i <= value; i++) {
            if (value % i == 0) return 0;
        }
        return 1;
    }
    return 0;
}

int main()
{
    char str[1001];
    scanf ("%[^\n]%*c", str);
    char words[1001][1001];
    int ctr =0, j = 0, sum = 0, almostFlag = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == '\0' || str[i] == ' ') {
            words[ctr][j] = '\0';
            ctr++;
            j = 0;
        }
        else {
            words[ctr][j] = str[i];
            j++;
        }
    }
    for (int i = 0; i <= ctr; i++) {
        sum += calSentenceValue (words[i]); int al = 0;
        for (int j = 0; j <= ctr; j++) {
            if (j != i) {
                al += calSentenceValue (words[j]);
            }
        }
        if (isPrime (al)) {
            almostFlag = 1;
        }
    }
    if (isPrime (sum)) {
        printf ("Prime");
    }
    else if (almostFlag) {
        printf ("Almost Prime");
    }
    else {
        printf ("Composite");
    }
    return 0;
}