#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char str[1001];
    scanf ("%s", str);
    int n = strlen(str);
    int start = 0, end = n-1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= 0 && i <= n/2) {
                if (j == start || j == end) {
                    printf ("%c", str[j]);
                }
                else printf (" ");
            }
            else {
                if (j == start || j == end) {
                    printf ("%c", str[j]);
                }
                else printf (" ");
            }
        }
        start++;
        end--;
        printf ("\n");
    }
}