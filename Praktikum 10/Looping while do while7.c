#include <stdio.h>
#include <stdlib.h>

void main (){
    int i=0;
    float persen, biaya_awal, perbulan, biaya;

    printf ("Masukkan biaya awal ibadah haji = ");
    scanf ("%f", &biaya_awal);
    printf ("Tabungan tiap bulan = ");
    scanf ("%f", &perbulan);
    printf ("Rata rata kenaikan tiap tahun (%%) = ");
    scanf ("%f", &persen);
    biaya=biaya_awal;
    do {
        i++;
        biaya=biaya-perbulan;
        if (i%12==0)
            biaya=biaya+(biaya_awal*(persen*0.01));
    }while (biaya>0);
        printf ("Waktu yang dibutuhkan untuk melunasi biaya haji adalah %d bulan", i);
}
