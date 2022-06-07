#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r, c;
    scanf ("%d %d", &r, &c);
    int counter = 1;
    int mat[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf ("%d", &mat[i][j]);
        }
    }
    
    int i = r-1, j = c-1;
    while (i >= 0 && j >= 0) {
        printf ("%d ", mat[i][j]);
        if (counter) {
            if (j == c-1 || i == 0) {
                i == 0 ? j-- : i--;
                counter = 0;
            }
            else {
                i--;
                j++;
            }
        }
        else {
            if (j == 0 || i == r-1) {
                j == 0 ? i-- : j--;
                counter = 1;
            }
            else {
                i++; j--;
            }
        }
    }
}

/**
5 5
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25

3 3
1 2 3
4 5 6
7 8 9
 */