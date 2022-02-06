#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main () 
{
    char str[1001];
    scanf ("%s", str);
    char result[1001]; int maxLength =  0;

    for (int i = 0; i < strlen(str); ) {
        char subString[1001]; int len = 0;
        subString[len++] = str[i];
        for (int j = i + 1; j < strlen(str); j++) {
            if (str[j-1] <= str[j])  {
                subString[len++] = str[j];
                i++;
            }
            else break;
        }
        subString[len] = '\0';
        i++;
        if (strlen(subString) > maxLength) {
            maxLength = len;
            strcpy (result, subString);
        }
    }
    printf ("\nOutput :\n");
    printf ("%s", result);
    return 0;
}

/**

acegjdbmprtzdsvx

google

airport

rfgkdoquydmqgxtgehzisdeokzrairrbjoagflalczfdxsocmdypjykovaozrklcnliranhvrazpbjwkokmcuqlptbplixvsucaclfgioprmseodenjgcugfhjoftazkdwswyeuzksswfrkkwklcqopdvpnukrbbsisoomhngotchbvdzpspkwfsgnahhhntszkiikzkgcztyilwdhhrgrwwwfrbexfhuuvfqcusphdatcaupodgkfmtjvpyzuasxxhcjlzopbwilullsilgmotmrwtwxguibpuvmmozptgosgrfrvcpobedsmqsugohjzsjfataoiybyeuzdfykxfecojrrbidrngggjyhknelpnzdmtlklkqsjaxugbgwkqjstxdmttjlflaxhaqebmwguomgcrjxjgneizzrxticzmnzmhkjwccuzdjsqksehmeysixehobvqkmhkzfcdynopqmmwemvzvggqqrbltosslzznekvzoktvlylluxrenvviculxutwamhexbrkvxntsmglnqvmpktscazkfuebhptwnqwxzkdswvbgwwhrfwbrncesolrdizdvbxmzuelsqwewtbkxheqkbuqhxpkzyeajnvfnyonbydgkbdozskjyroaspticlhzdslriwuxjftcgpqaqlkihlqmfjuykmlfwfmxgovccnohjcncbcwcossjlxirlwqcvzyeeovgsbvlbpyrelrvdsdoraoneavlrpvvhouyeghepzkozuxrqrrobpxghbuhsyjjmzoimwvcymzrmfoadcnmvnemhthkonmkuoqvvzdgixpsguwljimajerivscolciuwokmqfgfumikmokwtuzbidmrffqimgwvqwscqjtqqnbakikwnhbejhixbpvgxqooqkbtmdyenjtgzsxuntbdabysothiaqqgfsegikmoprsuvugsmsnvgqzcghfamtkjonqblyma

*/