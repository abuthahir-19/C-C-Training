#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isUpper (char ch) {
    if (ch >= 'A' && ch <= 'Z') return 1;
    else return 0;
}

int isLower (char ch) {
    if (ch >= 'a' && ch <= 'z') return 1;
    else return 0;
}

int isNotUpperNotLower (char ch) {
    if (!(ch >= 'a' && ch <= 'z') && !(ch >= 'A' && ch <= 'Z')) return 1;
    else return 0;
}
int main () 
{
    int n, count = 0;
    scanf ("%d", &n);
    char str[101];
    for (int i = 0; i < n; i++) {
        scanf ("%s", str);
        int upper = 0, lower = 0;
        if (str[0] >= 'a' && str[])
        if (lower == strlen(str)){
            count++;
            printf ("%s\n", str);
        }
        else if (upper == strlen(str)) {
            count++;
            printf ("%s\n", str);
        }
    }
    printf ("%d", count);
    return 0;
}


/**
4
hello
StanD
TASK
Fun

6
TIME
watch
le@p#rd
wireS
d@olphin
*(&GJK)B
**/