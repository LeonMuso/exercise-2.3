#include <stdio.h>
    int main() {
        int ore1, minuti1, secondi1;
        int ore2, minuti2, secondi2;
        int t1, t2, diff;

        printf("Inserisci i secondi del primo orario: ");
        scanf("%d", &secondi1);
        printf("Inserisci i minuti del primo orario: ");
        scanf("%d", &minuti1);
        printf("Inserisci le ore del primo orario: ");
        scanf("%d", &ore1);
        printf("Inserisci i secondi del secondo orario: ");
        scanf("%d", &secondi2);
        printf("Inserisci i minuti del secondo orario: ");
        scanf("%d", &minuti2 );
        printf("Inserisci le ore del secondo orario: ");
        scanf("%d", &ore2);
        t1 = minuti1*60 + ore1*3600 + secondi1;
        t2 = minuti2*60 + ore2*3600 + secondi2;
        if (t1 > t2)
            diff = t1 - t2;
        else
            diff = t2 - t1;
        printf("La differenza in secondi è: %d ", diff);

        return 0;

    }

