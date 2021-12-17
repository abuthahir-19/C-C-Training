#include <stdio.h>
#include <stdlib.h>

int isVowel (char ch) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        return 1;
    }
    else return 0;
}
void moveVowelsDown (char *str, int size) {
    char cons[size], vowel[size], index1 = 0, index2= 0, k = 0;
    for (int i = 0; i < size; i++) {
        if (!isVowel (str[i])) {
            cons[index1++] = str[i];
        }
        else vowel[index2++] = str[i];
    }
    for (int i = index1; i < size; i++) {
        cons[i] = vowel[k++];
        index1++;
    }
    for (int i = 0; i < index1; i++) {
        str[i] = cons[i];
    }
}

void print (char str[], int size) {
    for (int i = 0; i < size; i++) {
        printf ("%c ", str[i]);
    }
    printf ("\n");
}

int main() {
    int n;
    scanf ("%d", &n);
    char mat[n][n], str[2];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf ("%s", str);
            mat[i][j] = str[0];
        }
    }

    printf ("Output : \n");
    for (int i = 0; i < n; i++) {
        char chars[n]; int k = 0;
        for (int j = 0; j < n; j++) {
            chars[k++] = mat[j][i];
        }
        moveVowelsDown (chars, k);
        k = 0;
        for (int j = 0; j < n; j++) {
            mat[j][i] = chars[k++];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf ("%c ", mat[i][j]);
        }
        printf ("\n");
    }
    return 0;
}

/**
4
U I c N
a x S b
g a O L
R m L M
**/