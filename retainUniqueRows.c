#include <stdio.h>
#include <stdlib.h>

typedef struct BoundedArray {
    int R, C; 
    int **matrix;
} boundedArray;

boundedArray *removeArrayWithSameDigits (int r, int c, int *mat) {
    boundedArray *obj = (boundedArray*)malloc (sizeof(boundedArray));
    obj -> C = c;
    obj -> matrix = (int**)malloc(r* sizeof(int**));
    int k = 0;
    int *ptr = &mat[0];

    for (int i = 0; i < r; i++) {
        int count = 0, *initAdd = ptr;
        for (int j = 0; j < c; j++) {
            if ((*ptr) == *initAdd) count++;
            ptr++;
        }
        if (count == c) {
            continue;
        }
        else {
            obj -> matrix[k] = (int*)malloc(sizeof(int) * c);
            for (int col = 0; col < c; col++) {
                obj -> matrix[k][col] = *initAdd;
                initAdd++;
            }
            k++;
        }
    }
    if (k == 0) {
        obj -> R = obj -> C = 1;
        obj -> matrix[0] = (int*)malloc(sizeof(int) * 1);
        obj -> matrix[0][0] = -1;
    }
    return obj;
}
int main()
{
    int r, c;
    scanf ("%d %d", &r, &c);
    int mat[r][c];
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; j++) {
            scanf ("%d", &mat[i][j]);
        }
    }
    boundedArray *barr = removeArrayWithSameDigits (r, c, mat);
    printf ("Revised Matrix : \n");
    for (int i = 0; i < barr -> R; i++) {
        for (int j = 0; j < barr -> C; j++) {
            printf ("%d ", barr -> matrix[i][j]);
        }
        printf ("\n");
    }
    return 0;
}

/**
5 4
10 20 30 10
50 50 50 50
55 55 66 55
40 30 20 10
55 55 55 55

3 3
4 4 4
8 8 8
2 2 2
 */