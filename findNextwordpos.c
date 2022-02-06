#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void findNextWordPosition (char str[]) {
    char newString[1001][1001];
    int ctr = 0, j = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            newString[ctr][j] = '\0';
            ctr++;
            j = 0;
        }
        else {
            newString[ctr][j] = str[i];
            j++;
        }
    }

    printf ("\nOutput : \n");
    for (int i = 0; i <= ctr; i++) {
        char last = newString[i][strlen(newString[i])-1];
        int found = 0;
        for (int j = i+1; j <= ctr; j++) {
            if (newString[j][strlen(newString[j])-1] == last) {
                printf ("%d ",j+1);
                found = 1;
                break;
            }
        }
        if (!found) {
            for (int k = 0; k <= i; k++) {
                if (newString[k][strlen(newString[k])-1] == last) {
                    printf ("%d ", k+1);
                    break;
                }
            }
        }
    }
}

int main () 
{
    char str[1001];
    scanf ("%[^\n\r]", str);
    findNextWordPosition (str);
    return 0;
}

/**

pen table desk admin junction rock


one two three four five
*/