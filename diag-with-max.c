#include<stdio.h>
#include<stdlib.h>

int maxInteger (int R, int C, int mat[][C]) {
    int max = -1;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (mat[i][j] > max) {
                max = mat[i][j];
            }
        }
    }
    return max;
}

int main()
{
    int r, c;
    scanf ("%d %d", &r, &c);
    int mat[r][c], rowIndex, colIndex;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf ("%d", &mat[i][j]);
        }
    }
    
    int maxValue = maxInteger (r, c, mat);
    for (int i = 0; i < r; i++) {
        int found = 0;
        for (int j = 0; j < c; j++) {
            if (mat[i][j] == maxValue) {
                colIndex = j;
                found = 1;
                break;
            }
        }
        if (found) {
            rowIndex = i;
            break;
        }
    }
    if (rowIndex == 0) {
        int rest[1001], k = 0;
        for (int i = colIndex; i >= 0 && rowIndex < r; i--) {
            rest[k++] = mat[rowIndex++][i];
        }
        for (int i = k-1; i >= 0; i--) {
            printf("%d ", rest[i]);
        }
    }
    else if (rowIndex == r-1) {
        int res[1001], k =0;
        for (int i = colIndex; i < c && rowIndex >= 0; i++) {
            res[k++] = mat[rowIndex--][i];
        }
        for (int i = 0; i < k; i++) {
            printf ("%d ", res[i]);
        }
    }
    else if (rowIndex > 0 && rowIndex < r-1) {
        int rest[1001], k = 0;
        if (colIndex == 0) {
            for (int i = colIndex; i < c && rowIndex >= 0; i++) {
                rest[k++] = mat[rowIndex--][i];
            }
        }
        else if (colIndex == c-1) {
            for (int i = colIndex; i >= 0 && rowIndex < r; i--) {
                rest[k++] = mat[rowIndex++][i];
            }
        }
        else if (colIndex > 0 && colIndex < c-1) {
            int bot[501], up[501], k1 = 0, k2 = 0;
            int shared = rowIndex;
            for (int i = colIndex; i >= 0 && shared < r; i--) {
                bot[k1++] = mat[shared++][i];
            }
            shared = rowIndex;
            for (int i = colIndex; i < c && shared >= 0; i++) {
                up[k2++] = mat[shared--][i];
            }
            for (int i = k1-1; i >= 0; i--) {
                printf("%d ", bot[i]);
            }
            for (int i = 1; i < k2; i++) {
                printf ("%d ", up[i]);
            }
            return 0;
        }
        for (int i = 0; i < k; i++) {
            printf ("%d ", rest[i]);
        }
    }
    return 0;
}
/**
 * 
3 4
86 81 44 95
71 16 84 63
90 75 37 21


6 3
12 70 18
75 45 54
59 26 55
30 26 75
88 71 78
66 96 27


5 10 
10 18 15 15 11 15 18 16 16 10 
13 18 14 10 18 12 35 18 19 18 
15 13 13 20 10 35 19 35 16 20 
14 16 13 15 13 16 10 18 13 35 
20 11 35 13 10 17 18 35 10 16
**/