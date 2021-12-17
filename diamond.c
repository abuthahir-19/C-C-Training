#include <stdio.h>
#include <stdlib.h>

int length (value) {
    int count = 0;
    while (value != 0) {
        count++;
        value /= 10;
    }
    return count;
}

int main()
{
    int r, c;
    scanf ("%d %d", &r, &c);
    int mat[r][c], rowEnd = 3;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) 
        {
            scanf ("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < r; i+=3)
    {
        if ((abs(i-r) >= 3)) {
            int colEnd = 3;
            for (int j = 0; j < c; j+=3) {
                for (int curRow = i; curRow < rowEnd; curRow++) {
                    for (int curCol = j; curCol < colEnd; curCol++) {
                        
                    }
                }
                colEnd += 3;
            }
            rowEnd += 3;
        }
    }
}

/**
5 7
10 11 12 13 14 15 16
20 21 22 23 24 25 26
30 31 32 33 34 35 36
41 42 43 44 45 46 47
63 66 65 64 61 62 69

**/