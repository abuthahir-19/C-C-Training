#include <stdio.h>
#include <stdlib.h>

int r() {
    static int num = 7;
    return num--;
}
int main()
{
    float i = 2.5, j = 1.2;
    printf ("%f", i/j);
    return 0;
}