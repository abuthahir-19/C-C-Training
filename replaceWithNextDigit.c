#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int indexOf (char digits[], int value) {
    for (int i = 0; i < strlen(digits); i++) {
        if (digits[i] == value) return i;
    }
    return -1;
}

void replaceWithNextDigit (int N) 
{
    char str[1001], temp[1001];
    sprintf (str, "%d", N);
    sprintf (temp, "%d", N);
    char digits[10] = "0123456789";
    int mod[strlen(str)], k = 0;

    for (int i = 0; i < strlen(str); i++) {
        int ind = (indexOf (digits, str[i]) + 1) % 10;
        temp[i] = digits[ind];
        mod[k++] = atoi (temp);
        sprintf (temp, "%d", N);
    }
    
    for (int i = 0; i < k; i++) {
        for (int j = i+1; j < k; j++) {
            if (mod[i] > mod[j]) {
                int t = mod[i];
                mod[i] = mod[j];
                mod[j] = t;
            }
        }
    }

    for (int i = 0; i < k; i++) {
        printf ("%d ", mod[i]);
    }
}

int main()
{
    int N;
    scanf ("%d", &N);
    replaceWithNextDigit (N);
    return 0;
}