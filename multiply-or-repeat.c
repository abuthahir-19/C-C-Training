#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char* repeatOrMultiply (char* str) {
    char* op1 = malloc (sizeof(char) * strlen (str));
    char* op2 = malloc (sizeof(char) * strlen (str));
    char* returValue = malloc(sizeof(char) * 101);
    int l1 = 0, l2 = 0, i = 0, index = 0;
    for (; str[i] != '*'; i++) {
        op1[l1++] = str[i];
    }
    op1[l1] = '\0';
    i++;
    for (; i < strlen(str); i++) {
        op2[l2++] = str[i];
    }
    op2[l2] = '\0';
    if ((op1[0] >= '0' && op1[0] <= '9') && (op2[0] >= '0' && op2[0] <= '9')) {
        int prod = atoi (op1) * atoi (op2);
        sprintf (returValue, "%d", prod);
    }
    else if ((op1[0] >= 'A' && op1[0] <= 'Z') ||
            (op1[0] >= 'a' && op1[0] <= 'z')) {
            int length = atoi (op2);
            for (int j = 0; j < length * l1; j++) {
                returValue[index++] = op1[j % l1];
            }
        returValue[index] = '\0';
    }
    else if ((op2[0] >= 'A' && op2[0] <= 'Z') ||
            (op2[0] >= 'a' && op2[0] <= 'z')) {
            int length = atoi (op1);
            for (int j = 0; j < length * l2; j++) {
                returValue[index++] = op2[j % l2];
            }
        returValue[index] = '\0';
    }
    return returValue;
}

int main () 
{
    char str[101];
    scanf ("%s", str);
    char* result = repeatOrMultiply (str);
    if (result == NULL) {
        printf ("\nString is not formed");
    }
    else if (result[0] == '\0' || result[0] == ' ') {
        printf ("String is empty !!");
    }
    else printf ("%s", result);
    return 0;
}