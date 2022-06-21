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
            if (i == 0 || j == 0 || i == r-1 || j == c-1) {
                mat[i][j] = rev (mat[i][j]);
            }
        }        
    }
    int t = mat[0][c-1];
    for (int i = c-2; i >= 0; i--) {
        mat[0][i] = mat[0][i+1];
    }
    mat[0][0] = mat[1][0];

    // for (int i)
    printf ("\nOutput Matrix : \n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
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