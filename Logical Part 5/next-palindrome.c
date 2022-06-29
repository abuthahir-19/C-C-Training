#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

long int reverse (long int value) {
    long int r = 0;
    while (value != 0) {
        r = r * 10 + (value % 10);
        value /= 10;
    }
    return r;
}

bool isPalindrome (int value) {
    char str[10001];
    sprintf (str, "%d", value);
    int len = strlen(str)-1;
    for (int i = 0; i < strlen(str)/2; i++) {
        if (str[i] != str[len]) {
            return false;
        }
        len--;
    }
    return true;
}

int main()
{
    long int n;
    scanf ("%ld", &n);
    n = n+1;
    while (!isPalindrome(n)) {
        n+=1;
    }
    printf ("%ld", n);
    return 0;
}