#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct BoundedArray {
    int SIZE;
    int *arr;
} boundedArray ;

boundedArray *getArrayFromString (char *str, int k) {
    boundedArray *obj = (boundedArray*)malloc(sizeof(boundedArray));
    obj -> SIZE = 0;
    obj -> arr = (int*)malloc(sizeof(int) * strlen(str) / k);
    int end = k;
    for (int i = 0; i < strlen(str); i+=k) {
        char sub[1001], len = 0;
        for (int j = i; j < end; j++) {
            sub[len++] = str[j];
        }
        sub[len] = '\0';
        int zCount = 0, index = -1;;
        for (int v = 0; v < len; v++) {
            if (sub[v] == '0')zCount++;
            else {
                index = v;
                break;
            }
        }
        if (zCount > 0) {
            char sub2[1001]; int len2 = 0;
            for (int b = index; b < len; b++) {
                sub2[len2++] = sub[b];
            }
            for (int x = 0; x < zCount; x++) {
                sub2[len2++] = '0';
            }
            sub2[len] = '\0';
            obj -> arr [obj -> SIZE] = atoi (sub2);
        }
        else 
            obj -> arr[obj->SIZE] = atoi (sub);
        obj -> SIZE += 1;
        end += k;
    }
    return obj;
}

int main() 
{
    char str[1001];
    int k;
    scanf ("%s\n%d", str, &k);
    boundedArray *barr = getArrayFromString (str, k);
    for (int i = 0; i < barr -> SIZE; i++) {
        printf ("%d ", barr -> arr[i]);
    }
    return 0;
}

/**
121021562005468058
3

50000004
4
**/