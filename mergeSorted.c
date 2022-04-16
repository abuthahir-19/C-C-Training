#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n;
    scanf ("%d %d", &m, &n);
    int *ar1 = (int*)malloc(sizeof(int) * m), ar2[n];
    for (int i = 0; i < m; i++) {
        scanf ("%d", &ar1[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf ("%d", &ar2[i]);
    }
    for (int i = 0; i < n; i++) {
        int val = ar2[i], flag = 0, pos;
        for (int j = 0; j < m; j++) {
            if (ar2[j] == val) {
                flag = 1;
                break;
            }
            if (ar2[j] < val && ar2[j+1] > val) {
                pos = j+1;
                break;
            }
        }
        if (flag == 0) {
            for (int v = pos; v < m; v++) {
                ar1[v+1] = ar1[v];
            }
            ar1[pos] = val;
        }
    }
    for (int i = 0; i < m; i++) {
        printf ("%d ", ar1[i]);
    }
    return 0;
}

/**
7 6 
1 3 4 5 8 9 10 
1 2 3 5 7 8
 */