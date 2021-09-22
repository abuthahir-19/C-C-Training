#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

char* asciiToString (int *a, int size) {
    char *str = (char*)malloc(sizeof(char));
    int k = 0;
    for (int i = 0; i < size; i++) {
        str[k++] = a[i];
    }
    str[k] = '\0';
    return str;
}

int main ()
{
    int n;
    scanf ("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    scanf ("%d", &a[i]);
    char *str = asciiToString (a, n);
    printf ("%s", str);
    return 0;
}