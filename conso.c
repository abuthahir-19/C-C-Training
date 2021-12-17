#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int n;
    scanf ("%d", &n);
    char mat[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf (" %c", &mat[i][j]);
        }
    }

    printf("Output : \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf ("%c ",mat[i][j]);
        }
        printf ("\n");
    }
}

/**
4 
U I c N
a x S b
g a O L
R m L M

**/