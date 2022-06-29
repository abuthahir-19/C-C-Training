#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[1001];
    int start, end;
    scanf ("%s %d %d", str, &start, &end);
    if (start > end) {
        for (int i = start; i < strlen(str); i++) {
            printf ("%c", str[i]);
        }
        for (int i = 0; i <= end; i++) {
            printf ("%c", str[i]);
        }
    }else {
        for (int i = start; i <= end; i++) {
            printf ("%c", str[i]);
        }
    }
    return 0;
}