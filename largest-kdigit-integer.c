#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () 
{
    int k, temp, max = -1;
    char str[1001];
    scanf ("%s\n%d", str, &k);
    temp = k;
    if (strlen(str) >= k) {
        for (int i = 0; i < strlen(str); i++) {
            if (abs(strlen(str) - i) >= k) {
                int subValue = 0;
                for (int j = i; j < temp; j++) {
                    int val = str[j]-'0';
                    subValue = subValue * 10 + val;
                }
                if (subValue > max) {
                    max = subValue;
                }
                temp++;
            }
            else break;
        }
        printf ("%d", max);
    }
    else printf ("-1");
    return 0;
}

/**
6478414
3

600
4

21541094
4
**/