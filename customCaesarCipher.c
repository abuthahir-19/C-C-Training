#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* customCaesarCipher (int key, char* message) {
    char* encryp = (char*)malloc(sizeof(char));
    char* neg = "INVALID INPUT";
    int len = 0;
    if (key > 0) {
        for (int i = 0; i < strlen(message); i++) {
            if ((message[i] >= 'a' && message[i] <= 'z') || (message[i] >= 'A' && message[i] <= 'Z')) {
                if (message[i] >= 'a' && message[i] <= 'z') {
                    if (message[i] >= ('z' - (key-1)) && (message[i] <= 'z'))
                    encryp[len++] = (message[i] + key) - 26;
                    else encryp[len++] = (message[i] + key);
                }
                else if (message[i] >= 'A' && message[i] <= 'Z') {
                    if (message[i] >= ('Z' - (key-1)) && (message[i] <= 'Z')) 
                    encryp[len++] = (message[i] + key) - 26;
                    else encryp[len++] = (message[i] + key);
                }
            }
            else if (message[i] >= '0' && message[i] <= '9') {
                if (message[i] >= ('9'-'0' - (key-1) + '0') && message[i] <= '9') {
                    int val = ((message[i] - '0') + key) - 1;
                    encryp[len++] = (val % 9) + '0';
                }
                else 
                encryp[len++] = ((message[i] - '0') + key) + '0';
            }
            else {
                encryp[len++] = message[i];
            }
        }
        encryp[len++] = '\0';
        return encryp;
    }
    else {
        return neg;
    }
}
int main () 
{
    int n;
    scanf ("%d", &n);
    char str[101];
    fflush (stdin);
    scanf ("%[^\n]%*c", str);
    char *newStr = customCaesarCipher (n, str);
    printf ("%s", newStr);
    return 0;
}

/***
1
All is well. #45.9K Tweets


4 
Good bye... Mr. XYZ

-2 
SkillRack
**/