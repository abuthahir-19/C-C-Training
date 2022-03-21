#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x;
    scanf ("%d %d", &n, &x);
    int arr[n], excess = 0, needCount = 0;
    for (int i = 0; i < n; i++) {
        scanf ("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] > x) {
            excess += (arr[i] - x);
            arr[i] = x;
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (arr[i] < x) {
            int addValue = x - arr[i];
            if (excess > 0) {
                arr[i] += addValue;
                excess -= addValue;
                if (excess < 0) {
                    excess = 0;
                }
            }
            else {
                needCount += addValue;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf ("%d ", arr[i]);
    }
    printf ("\n");
    printf ("%d", excess);
    return 0;
}

/**
5 15 
5 25 10 6 34


5 4 
1 2 3 5 2
 */