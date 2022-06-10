#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf ("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++) {
        scanf ("%d", &ar[i]);
    }
    for (int i = 0; i < n; i++) {
        int val = ar[i];
        if (val % 2 == 0 && i > 0) {
            for (int j = i-1; j >= 0; j--) {
                ar[j+1] = ar[j];
            }
            ar[0] = val;
        }
    }

    printf ("\nElements of the array after shifting the even to front of array : \n");
    for (int i = 0; i < n; i++) {
        printf ("%d ", ar[i]);
    }
    return 0;
}