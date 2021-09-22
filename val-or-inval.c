#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int checkForSpaceBefFullStopAndComma (char str[]) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ') {
            if (str[i+1] == '.' || str[i+1] == ',') return 0;
        }
    }
    return 1;
}

int checkForSpaceAfterFullStopAndComma (char str[]) {
    for (int i = 0; i < strlen(str)-1; i++) {
        if (str[i] == '.' || str[i] == ',') {
            if (str[i+1] != ' ') return 0;
        }
    }return 1;
}

int upperCaseAfterFullStop (char str[]) {
    for (int i = 0; i < strlen(str)-1; i++) {
        if (str[i] == '.') {
            if (!(str[i+2] >= 'A' && str[i+2] <= 'Z')) return 0;
        }
    }return 1;
}

int lowerCaseAfterComma (char str[]) {
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ',') {
            if (!(str[i+2] >= 'a' && str[i+2] <= 'z')) return 0;
        }
    }return 1;
}
int main () 
{
    char str[101];
    scanf("%[^\n]%*c",str);
    // printf ("%d", checkForSpaceBefFullStopAndComma(str));
    // printf (" %d", checkForSpaceAfterFullStopAndComma (str));
    // printf (" %d", upperCaseAfterFullStop(str));
    // printf (" %d", lowerCaseAfterComma(str));

    if (checkForSpaceAfterFullStopAndComma (str)
    && checkForSpaceBefFullStopAndComma (str)
    && lowerCaseAfterComma(str)
    && upperCaseAfterFullStop (str)) {
        printf ("VALID");
    }
    else printf ("INVALID");
    
    return 0;
}

/**
Hi, hello. how are you?

I want to buy a pencil, a sharpener, an eraser and a notebook.


jhfrg akjfrheg, sfduh, ofid. Sdkfjg.
**/