#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char ch, alpha; int no;
    scanf ("%c", &ch);
    switch (ch) {
        case 'S':
            scanf ("%d", &no);
            if (no == 1) {
                printf ("Situation - Social topic");
            }
            else if (no == 2) {
                printf ("Situation - Entertainment topic");
            }
            else if (no == 3) {
                printf ("Situation - Historical topic");
            }
            else {
                printf ("Invalid");
            }
            break;
        case 'P':
            scanf (" %c", &alpha);
            if (alpha == 'D') {
                printf ("Performance - Dancing");
            }
            else if (alpha == 'S') {
                printf ("Performance - Singing");
            }
            else if (alpha == 'M') {
                printf ("Performance - Mimicry");
            }
            else {
                printf ("Invalid");
            }
            break;
        case 'T' :
            scanf (" %c", &alpha);
            if (alpha == 'P') {
                printf ("Truth - Personal");
            }
            else if (alpha == 'C') {
                printf ("Truth - Professional");
            }
            else printf ("Invalid");
            break;
        default :
            printf ("Invalid");
    }
    return 0;
}