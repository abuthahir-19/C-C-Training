#include <stdio.h>
#include <stdlib.h>

int main () 
{
    int dur, type;
    scanf ("%d %d", &dur, &type);
    double sec, min, costInRupee;
    double costInPaise;

    switch (type) {
        case 1:
            sec = (double) dur * 60.0;
            costInPaise = (double) sec / 6;
            costInRupee = (double) costInPaise / 100;
            break;
        case 2:
            min = (double) dur;
            costInPaise = (double) min * 25;
            costInRupee = (double) costInPaise / 100;
            break;
        case 3:
            costInPaise = (double) dur * 50;
            costInRupee = (double) costInPaise / 100.0;
            break;
        default : 
            min = (double) dur;
            costInPaise = (double) min * 100;
            costInRupee =  (double) costInPaise / 100.0;
            break;
    }

    printf ("%.2lf",costInRupee);
    return 0;
}