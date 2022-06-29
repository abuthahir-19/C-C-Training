#include <stdio.h>
#include <stdlib.h>

int rev (int value) {
    int v = 0;
    while (value != 0) {
        v = v * 10 + value % 10;
        value /= 10;
    }
    return v;
}

int main()
{
    int r, c;
    scanf ("%d %d", &r, &c);
    int mat[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf ("%d", &mat[i][j]);
        }        
    }
    //logic to shift the matrix elements one position by clock wise direction
    int leftValues[2], k = 0;
    for (int i = 0; i < r; i++) {
        if (i == 0) {
            leftValues[k++] = mat[i][c-1];
            int j;
            for (j = c-2; j >= 0; j--) {
                mat[i][j+1] = mat[i][j];
            }
        }
        if (i == r-1) {
            leftValues[k++] = mat[i][0];
            int j;
            for (j = 1; j < c; j++) {
                mat[i][j-1] = mat[i][j];
            }
        }
    }
    for (int i = 1; i < r-1; i++) {
        mat[i-1][0] = mat[i][0];
    }
    for (int i = r-1; i >= 1; i--) {
        mat[i][c-1] = mat[i-1][c-1];
    }
    mat[1][c-1] = leftValues[0];
    mat[r-2][0] = leftValues[1];

    
    printf ("\nOutput : \n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (i == 0 || j == 0 || i == r-1 || j == c-1) {
                mat[i][j] = rev (mat[i][j]);
            }
            printf ("%d ", mat[i][j]);
        }
        printf ("\n");
    }

    return 0; 
}

/****
4 4
85 84 12 26
33 43 91 95
98 17 45 66
57 17 73 10
***/