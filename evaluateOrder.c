#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int evaluateOrder (char *str) {
    for (int i = 0; i < strlen(str); i++) {
        char firstOperand[51], secondOperand[51];
        int len1 =0, len2 = 0;
        if (str[i] == '<' || str[i] == '>') {
            for (int j = i, k = i; j < strlen(str) && k >= 0; j++, k--) {
                if ((str[j] == '<' || str[j] == '>') && (str[k] == '<' || str[k] == '>')) break;
                firstOperand[len1++] = str[k];
                secondOperand[len2++] = str[j];
                i++;
            }
            firstOperand[len1] = '\0';
            secondOperand[len2] = '\0';
        }
        printf ("%s %s\n", firstOperand, secondOperand);
    }
}

int main ()
{
    char str[1001];
    scanf ("%s", str);
    printf ("%d", evaluateOrder (str));
    return 0;
}

/**
10<20<50>10<400>5<6
 * 
 */