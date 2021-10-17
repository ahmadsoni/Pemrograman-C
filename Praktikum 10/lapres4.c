#include <stdio.h>
#include <stdlib.h>

void main (){
    int term=0;
    float persen_pertahun, biaya_awal, tabungan_perbulan, biaya, bonus;

    printf ("Masukkan biaya awal ibadah haji = ");
    scanf ("%f", &biaya_awal);
    printf ("Tabungan tiap bulan = ");
    scanf ("%f", &tabungan_perbulan);
    printf ("Bonus gaji anda = ");
    scanf ("%f", &bonus);
    printf ("Rata rata kenaikan tiap tahun (%%) = ");
    scanf ("%f", &persen_pertahun);
    biaya=biaya_awal;
    do {
    term++;
        if (term==0 || term%12==0)
            biaya=biaya+(biaya_awal*persen_pertahun*0.01);
        if (term%6==0)
            biaya=biaya-bonus;
    biaya=biaya-tabungan_perbulan;
    }while (biaya>0);
        printf ("Waktu yang dibutuhkan untuk melunasi biaya haji adalah %d bulan", term);
}
