#include <stdio.h>
#include <stdlib.h>

int has (int ar[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (ar[i] == key) return 1;
    }
    return 0;
}

int indexOf (int ar[], int size, int key, int position) {
    if (position == -1) {
        for (int i = 0; i < size; i++) {
            if (ar[i] == key) return i;
        }
    }
    else {
        for (int i = position; i < size; i++) {
            if (ar[i] == key) return i;
        }
    }
}

int hasMorethanOneOccurence (int ar[], int size, int key) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (ar[i] == key) count++;
    }
    if (count > 1) return 1;
    else return 0;
}

int main()
{
    int r, c, k, rowStart = -1, rowEnd;
    scanf ("%d %d %d", &r, &c, &k);
    int mat[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf ("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < r; i++) {
        if (has(mat[i], c, k)) {
            if (hasMorethanOneOccurence (mat[i], c, k)) {
                rowStart = i;
                rowEnd = i;
                break;
            }
            else if (!hasMorethanOneOccurence (mat[i], c, k) && rowStart == -1) {
                rowStart = i;
            }
            else if (!hasMorethanOneOccurence (mat[i], c, k) && rowStart != -1) {
                rowEnd = i;
                break;
            }
        }
    }

    if (rowStart == rowEnd) {
        int colStart = indexOf (mat[rowStart], c, k, -1);
        int colEnd = indexOf (mat[rowStart], c, k, colStart+1);
        for (int i = colStart; i <= colEnd; i++) {
            printf ("%d ", mat[rowStart][i]);
        }
    }
    else {
        int colStart = indexOf (mat[rowStart], c, k, -1);
        int colEnd = indexOf (mat[rowEnd], c, k, -1);

        if (colStart > colEnd) {
            int t = colStart;
            colStart = colEnd;
            colEnd = t;
        }

        for (int i = rowStart; i <= rowEnd; i++) {
            for (int j = colStart; j <= colEnd; j++) {
                printf ("%d ", mat[i][j]);
            }
            printf ("\n");
        }
    }
    return 0;
}

/**
6 4 12
91 12 35 12 
16 79 31 63 
82 33 12 26 
10 12 62 39 
39 46 31 11 
31 50 52 27


5 4 30 
48 42 17 32
52 23 30 34
44 30 33 11
20 15 30 75
26 60 44 84

5 5 20 
11 30 63 52 78
20 82 93 53 64
23 91 21 64 64
99 88 20 56 65
64 70 76 20 66
**/