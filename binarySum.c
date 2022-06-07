#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *reverse (char *str) {
    int len = strlen(str)-1;
    for (int i = 0; i < strlen(str)/2; i++) {
        char t = str[i];
        str[i] = str[len];
        str[len] = t;
        len--;
    }
    return str;
}

char* evaluate (char* f, char* s) {
    int carry = 0, c = 0;
    char *sum = (char*)malloc(sizeof(char));
    char *newString = (char*)malloc(sizeof(char));
    int len = 0;
    if (strlen(f) > strlen(s)) {
        int padLen = strlen(f) - strlen(s);
        char *paddString = "0000000000000";
        sprintf (newString, "%*.*s%s", padLen, padLen, paddString, s);
        s = newString;
    }
    else if (strlen(s) > strlen(f)) {
        int paddLen = strlen(s) - strlen(f);
        char *paddString = "0000000000000";
        sprintf (newString, "%*.*s%s", paddLen, paddLen, paddString, f);
        f = newString;
    }
    for (int i = strlen(f)-1; i >= 0; i--) {
        if (carry) {
            if (f[i] == '1' && s[i] == '1') {
                carry = 1;
                sum[len++] = '1';
            }
            else {
                if (carry) {
                    int val = ((f[i]-'0') + (s[i]-'0'));
                    if (val == 1) {
                        sum[len++] = '0';
                    }
                    else {
                        sum[len++] = '1';
                        carry = 0;
                    }
                }
                else {
                    int val = ((f[i]-'0') + (s[i]-'0'));
                    sum[len++] = val + '0';
                }
            }
        }
        else {
            if (f[i] == '1' && s[i] == '1') {
                carry = 1;
                sum[len++] = '0';
            }
            else {
                sum[len++] = ((f[i] - '0') + (s[i] - '0')) + '0';
            }
        }
    }
    if (carry) {
        sum[len++] = '1';
    }
    sum[len] = '\0';
    sum = reverse (sum);
    return sum;
}

char* findBinarySum (int n, char binaryString[n][101]) {
    char *f = binaryString[0];
    char *s = binaryString[1];
    char *res = evaluate (f, s);
    for (int i = 2; i < n; i++) {
        res = evaluate (res, binaryString[i]);
    }
    return res;
}

int main()
{
    int n;
    scanf ("%d", &n);
    char str[n][101];
    for (int i = 0; i < n; i++) {
        scanf ("%s", str[i]);
    }
    char *binarySum = findBinarySum (n, str);
    printf ("%s", binarySum);
    return 0;
}


/**
2
10001
11001


3
100000
111
100010


2 
1000000000000000000000000000000000000000000000000000000000000000000000 
1111111111111111111111111111111111111111111111111111111111111111111111
 */