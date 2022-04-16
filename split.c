#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct BoundedArray {
    int SIZE;
    char **words;
} boundedArray;


boundedArray *sortSubStrings (char *str, int k) {
    boundedArray *barr = (boundedArray*)malloc(sizeof(boundedArray));
    barr -> SIZE = 0;
    barr -> words = (char**)malloc(sizeof(char));
    int end = k;
    for (int i = 0; i < strlen(str); i+=k) {
        barr -> words[barr->SIZE] = (char*)malloc(sizeof(char));
        int len = 0;
        for (int j = i; j < end; j++) {
            barr -> words[barr -> SIZE][len] = str[j];
            len++;
        }
        end += k;
        barr -> words[barr -> SIZE][len] = '\0';
        barr -> SIZE = barr -> SIZE +  1;
    }
    // for (int i = 0; i < barr -> SIZE; i++) {
    //     for (int j = i+1; j < barr -> SIZE; j++) {
    //         if (strcmp (barr -> words[i], barr -> words[j]) > 0) {
    //             char *t = barr -> words[i];
    //             barr -> words[i] = barr -> words[j];
    //             barr -> words[j] = t;
    //         }
    //     }
    // }
    return barr;
}

int main() 
{
    char str[1001];
    int n;
    scanf ("%s \n%d", str, &n);
    boundedArray *barr = sortSubStrings (str, n);
    for (int i = 0; i < barr -> SIZE; i++) {
        printf ("%s\n", barr -> words[i]);
    }
    return 0;
}