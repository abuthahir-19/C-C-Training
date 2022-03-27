#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int indexOf(int *cache, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (cache[i] == value) return i;
    }
    return -1;
}

int lastIndexOf (int *recent, int size, int value) {
    for (int i = size-1; i >= 0; i--) {
        if (recent[i] == value) return i;
    }
    return -1;
}

int leastRUsed (int *cache, int k, int *recent, int index) {
    int minIndex = INT_MAX, lru;
    for (int i = 0; i < k; i++) {
        int ind = lastIndexOf (recent, index, cache[i]);
        if (ind < minIndex) {
            minIndex = ind;
            lru = cache[i];
        }
    }
    return lru;
}

int lruMissCount(int maxSize, int *pages, int len)
{
    int cache[maxSize], k = 0;
    int missCount = 0;
    int leastIndex = 0;
    int recent[len], ind = 0;
    for (int i = 0; i < len; i++) {
        int value = pages[i], flag = 0;
        for (int j = 0; j < k; j++) {
            if (cache[j] == value) {
                flag = 1;
                break;
            }
        }

        if (k == maxSize && flag == 0) {
            int lru = leastRUsed (cache, k, recent, ind);
            if (flag == 0) missCount++;
            int index = indexOf(cache, k, lru);
            cache[index] = value;
        }

        if (k < maxSize && flag == 0) {
            cache[k++] = value;
            missCount++;
        }
        recent[ind++] = value;
    }
    return missCount;
}

int main()
{
    int n, max_cache_size;
    scanf("%d %d", &max_cache_size, &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int *ptr = ar;
    printf("%d", lruMissCount(max_cache_size, ptr, n));
    return 0;
}

/**
3 16
7 0 1 2 0 3 0 4 2 3 0 3 2 1 2 0

2 9 
2 3 1 3 2 1 4 3 2
 */