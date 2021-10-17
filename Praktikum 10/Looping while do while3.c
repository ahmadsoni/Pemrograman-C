#include <stdio.h>
#include <stdlib.h>

void main () {
    char jawab='y';
    int maks=0, min=0, i=1, bil, jumlah_bil=0;
    float total=0, rata_rata=0;
    do {
        printf ("Masukkan bilangan ke-%d : ", i);
        scanf ("%d", &bil);

        printf ("Mau memasukkan data lagi [y/n} ? ");
        scanf (" %c", &jawab);

        i++;

        jumlah_bil=i-1;
        total=total+bil;
        rata_rata=total/jumlah_bil;

        if (bil<min || min==0)
            min=bil;

        if (bil>maks || maks==0)
            maks=bil;

        fflush(stdin);
    } while (jawab == 'y');
    if (jawab=='n'){
        printf ("Total bilangan = %.2f\n", total);
    }
    else
        printf ("Invalid input");

    printf ("Rata rata = %.2f\n", rata_rata);
    printf ("Nilai maksimum = %d\n", maks);
    printf ("Nilai minimum = %d\n", min);
}
