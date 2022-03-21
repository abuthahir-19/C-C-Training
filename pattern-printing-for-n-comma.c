#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main () 
{
    char str[1001];
    scanf ("%s", str);
    char subString[101][101];
    int j = 0, ctr = 0;
    int arr[1001], len = 0, index = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ',' || str[i] == '\0') {
            subString[ctr][j] = '\0';
            ctr++;
            j = 0;
        }
        else {
            subString[ctr][j] = str[i];
            j++;
        }
    }
    for (int i = 0; i <= ctr; i++) {
        arr[len++] = atoi (subString[i]);
    }
    int count = 1;
    for (int i = len-1; i >= 0; ) {
        int ctr = count;
        while (ctr--) {
            i--;
        }
        count += 1;
    }
    count -= 1;
    int mat[count][count];
    for (int i = 0; i < count; i++) {
        for (int j = i; j < count; j++) {
            mat[j][i] = arr[index++];
        }
    }
    for (int i = 0; i < count; i++) {
        for (int j = 0; j <= i; j++) {
            printf ("%d ", mat[i][j]);
        }
        printf ("\n");
    }
}

/***
11,12,13,14,15,16


11,12,13,14,15,16,17,18,19,20

100,201,555
**/