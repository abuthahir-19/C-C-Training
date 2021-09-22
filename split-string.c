#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void recalculateArrivalTime (int speed, int dist, int hour, int min) {
    float duration; int incHour, incMin, finHour, finMin; 
    int minute;
    duration = (float) dist / speed;
    minute = duration * 60; 
    // minute = minute + min;

    incHour = minute / 60;
    incMin = minute % 60;

    finHour = hour + incHour;
    finMin = min + incMin;

    if (finMin > 60) {
        finHour += 1;
        finMin = finMin % 60;

        if ((finHour > 9 && finMin > 30) || (finHour > 9 && finMin < 30) || (finHour <= 9 && finMin > 30)) {
            printf ("NO");
        }
        else printf ("%d:%d", finHour, finMin);
    }
    else {

        if ((finHour > 9 && finMin > 30) || (finHour > 9 && finMin < 30) || (finHour <= 9 && finMin > 30)) {
            printf ("NO");
        }
        else printf ("%d:%d", finHour, finMin);
    }
}

int main ()
{
    int avg, distance, hh, mm, colonIndex = 0, mins, currHour, currMin, 
    incHour, incMin, finHour, finMin; 
    float dur;
    char time[101], befColon[51], aftColon[51];
    scanf ("%d %s %d", &avg, time, &distance);
    dur = (float) distance / avg ;
    mins = dur * 60;
    int b = 0, a = 0;
    for (int i = 0; i < strlen (time); i++) {
        if (time[i] == ':'){
            colonIndex = 1;
            continue;
        }
        if (colonIndex == 0)
        befColon[b++] = time[i];
        else {
            aftColon[a++] = time[i];
        }
    }
    befColon[b] = '\0';
    aftColon[a] = '\0';
    hh = atoi (befColon);
    mm = atoi (aftColon);
    
    currHour = hh;
    currMin = mm;

    incHour = mins/ 60;
    incMin = mins % 60;
    
    finHour = currHour + incHour;
    finMin = currMin + incMin;

    if (finMin > 60) {
        finHour += 1;
        finMin %= 60;
        
        if ((finHour > 9 && finMin > 30) || (finHour > 9 && finMin < 30) || (finHour <= 9 && finMin > 30)) {
            avg = avg + 20;
            recalculateArrivalTime (avg, distance, currHour, currMin);
        }
        else printf ("%d:%d", finHour, finMin);
    }
    else {
        if ((finHour > 9 && finMin > 30) || (finHour > 9 && finMin < 30) || (finHour <= 9 && finMin > 30)) {
            avg = avg + 20;
            recalculateArrivalTime (avg, distance, currHour, currMin);
        }
        else printf ("%d:%d", finHour, finMin);
    }
    return 0;
}

/**
60 8:45 40


30 9:10 60

80 9:10 70
**/