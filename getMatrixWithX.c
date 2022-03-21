#include <stdio.h>
#include <stdlib.h>

typedef struct BoundedArray {
    int R, C;
    int **matrix;
} boundedArray;

boundedArray* getMatrixWithX (int R, int C, int X) {
    boundedArray *barr = (boundedArray*) malloc (sizeof (boundedArray));
    barr -> R = R;
    barr -> C = C;
    barr -> matrix = malloc(R * sizeof(int**));
    for (int i = 0; i < R; i++) {
        barr -> matrix[i] = malloc (C * sizeof (int));
        for (int j = 0; j < C; j++) {
            barr -> matrix[i][j] = X;
        }
    }
    return barr;
}

int main() {
    int r, c, x;
    scanf ("%d %d %d", &r, &c, &x);
    boundedArray *bArr = getMatrixWithX (r, c, x);
    if (bArr == NULL || bArr -> matrix == NULL || bArr -> R != r || bArr->C != c) {
        printf ("matrix is not formed properly !!");
    }
    for (int i = 0; i < bArr -> R; i++) {
        for (int j = 0; j < bArr -> C; j++) {
            printf ("%d ", bArr -> matrix[i][j]);
        }
        printf ("\n");
    }
    return 0;
}