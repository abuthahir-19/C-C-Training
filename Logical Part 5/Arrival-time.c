#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void recalculateArrivalTime (int speed, int dist, int hour, int min) {
    float duration; 
    int minute;
    duration = (float) dist / speed;
    minute = duration * 60; 
    minute = minute + min;
    if (minute > 60) {
        hour += 1;
        minute = minute % 60;
    }
    if ((hour > 9 && minute > 30) || (hour > 9) || (minute > 30)) {
        printf ("%d:%d\n", hour, minute);
        printf ("NO");
    }
    else {
        printf ("%d:%d", hour, minute);
    }
}
int main ()
{
    int avg, distance, hh, mm, colonIndex = 0, mins, currHour, currMin; 
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
    mm = mm + mins;
    if(mm > 60) {
        hh += 1;
        mm = mm % 60;
        if ((hh > 9 && mm > 30) || (hh > 9) || (mm > 30)) {
            avg = avg + 20;
            recalculateArrivalTime (avg, distance, currHour, currMin);
        }
        else {
            printf ("%d:%d", hh, mm);
        }
    }
    else {
        if (mm > 60) {
            mm = mm % 60;
        }
        if ((hh <= 9 && mm <= 30) || (hh <= 9 && mm <= 60)) {
            printf ("%d:%d", hh, mm);
        }
        else printf ("NO");
    }
    return 0;
}

/**
60 8:15 40


30 9:10 60
**/