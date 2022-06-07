#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r, c;
    scanf ("%d %d", &r, &c);
    int mat[r][c], sum = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf ("%d", &mat[i][j]);
            if (i == 0 || j == 0 || i == r-1 || j == c-1) {
                sum += mat[i][j];
            }
        }
    }
    printf ("%d", sum);
    return 0;
}

/**
5 3
1 2 3
4 5 6
7 8 9
5 5 5
2 2 2 
 */
