#include "stdio.h"
void main() {
    int a[5] = {51, 1, 5, 20, 25};
    int x, y, z;
    x = ++a[1];
    y = a[1]++;
    z = a[x++];
    printf ("%d %d %d", x, y, z);
}