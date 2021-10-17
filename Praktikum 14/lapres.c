#include <stdio.h>
#include <stdlib.h>
int kabisat (int, int, int);

void main () {
    int tanggal, bulan, tahun, result;
    printf ("Tanggal = ");
    scanf ("%d", &tanggal);
    printf ("Bulan = ");
    scanf ("%d", &bulan);
    printf ("Tahun = ");
    scanf ("%d", &tahun);
    result=kabisat(tanggal, bulan, tahun);
    printf ("\n");
}

int kabisat (int tanggal, int bulan, int tahun) {
    if (tahun%4!=0 && tanggal>28 && bulan==2)
        printf ("Tanggal tidak valid");
    else if (bulan==1)
        printf ("%d Januari %d", tanggal, tahun);
    else if (bulan==2)
        printf ("%d Februari %d", tanggal, tahun);
    else if (bulan==3)
        printf ("%d Maret %d", tanggal, tahun);
    else if (bulan==4)
        printf ("%d April %d", tanggal, tahun);
    else if (bulan==5)
        printf ("%d Mei %d", tanggal, tahun);
    else if (bulan==6)
        printf ("%d Juni %d", tanggal, tahun);
    else if (bulan==7)
        printf ("%d Juli %d", tanggal, tahun);
    else if (bulan==8)
        printf ("%d Agustus %d", tanggal, tahun);
    else if (bulan==9)
        printf ("%d September %d", tanggal, tahun);
    else if (bulan==10)
        printf ("%d Oktober %d", tanggal, tahun);
    else if (bulan==11)
        printf ("%d November %d", tanggal, tahun);
    else if (bulan==12)
        printf ("%d Desember %d", tanggal, tahun);
}
