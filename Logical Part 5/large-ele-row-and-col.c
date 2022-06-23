#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf ("%d", &n);
    int mat[n][n], row[n], col[n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            scanf ("%d", &mat[i][j]);
    }

    for (int i = 0; i < n; i++) {
        int rowMax = -1, colMax = -1;
        for (int j = 0; j < n; j++) {
            if (mat[i][j] > rowMax) {
                rowMax = mat[i][j];
            }
            if (mat[j][i] > colMax) {
                colMax = mat[j][i];
            }
        }

        row[i] = rowMax;
        col[i] = colMax;
    }
    printf ("Ouput : \n");

    for (int i = 0; i < n; i++) {
        printf ("%d ", row[i]);
    }
    printf ("\n");
    for (int i = 0; i < n; i++) {
        printf ("%d ", col[i]);
    }

    return 0;
}


/***
3
1 2 3
4 5 6
7 8 9


4
3 5 8 9
5 2 4 8
5 1 3 4
0 1 2 3
****/