#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>

int main () 
{
    int speed, hh, mm, dist, th, tm, am = 1;
    scanf ("%d %d:%d %d", &speed, &hh, &mm, &dist);
    th = hh, tm = mm;
    float t = (float) dist / speed * (60.0);
    int newHour = t/60;
    int newMin = (int)t % 60;
    hh = hh + newHour;
    mm = mm + newMin;
    if (hh >= 12) {
        hh = hh % 12;
        am = !am;
    }
    if (mm >= 60) {
        hh+=1;
        mm = mm % 60;
    }
    if ((hh == 9 && mm < 30) || (hh < 9 && mm >= 1 && mm <= 59) && am) {
        printf ("%d:%d", hh, mm);
    }
    else {
        speed = speed + 20;
        am = 1;
        float t = (float) dist / speed * (60.0);
        int newHour = t/60;
        int newMin = (int)t % 60;
        th = th + newHour;
        tm = tm + newMin;
        if (th >= 12) {
            th = th % 12;
            am = !am;
        }
        if (tm >= 60) {
            th+=1;
            tm = tm % 60;
        }
        if ((th == 9 && tm < 30) || (th < 9 && tm >= 1 && tm <= 59) && am) {
            printf ("%d:%d", th, tm);
        }
        else {
            printf ("NO");
        }
    }
    return 0;
}

/**
60 8:45 40

30 9:10 60

30 12:45 60

30 8:05 45
*/