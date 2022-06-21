#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[1001];
    int L, count = 0;
    scanf ("%[^\n]%*c", str);
    scanf ("%d", &L);
    char *token = strtok (str, " ");
    while (token != NULL) {
        if (strlen(token) >= L) count += 1;
        token = strtok (NULL, " ");
    }
    printf ("%d", count);
    return 0;
}

/***
During and after Kenyattas inauguration police elsewhere in the capital, Nairobi, tried to stop the opposition from holding peaceful demonstrations.
5
***/