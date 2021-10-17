#include <stdio.h>
#include <stdlib.h>

float konversi (float, char, char);

void main () {
    float suhu;
    char suhu_awal;
    char suhu_tujuan;

    printf ("Masukkan suhu sumber = ");
    scanf ("%f", &suhu);
    printf ("Masukkan satuan asal (huruf kapital) = ");
    scanf (" %c", &suhu_awal);
    printf ("Masukkan satuan tujuan (huruf kapital)= ");
    scanf (" %c", &suhu_tujuan);
    printf ("Hasil konversi suhu %g %c = %g %c\n", suhu, suhu_awal, konversi(suhu, suhu_awal, suhu_tujuan), suhu_tujuan);
}

float konversi (float suhu, char suhu_awal, char suhu_tujuan){
    float hasil=1;
    if (suhu_awal=='C' && suhu_tujuan=='R')
        hasil=suhu*4/5;
    else if (suhu_awal=='C' && suhu_tujuan=='F')
        hasil=suhu*9/5+32;
    else if (suhu_awal=='C' && suhu_tujuan=='K')
        hasil=suhu+273;
    else if (suhu_awal=='R' && suhu_tujuan=='C')
        hasil=suhu*5/4;
    else if (suhu_awal=='R' && suhu_tujuan=='F')
        hasil=suhu*9/4+32;
    else if (suhu_awal=='R' && suhu_tujuan=='K')
        hasil=suhu*5/4+273;
    else if (suhu_awal=='F' && suhu_tujuan=='C')
        hasil=suhu*5/9*(suhu-32);
    else if (suhu_awal=='F' && suhu_tujuan=='R')
        hasil=suhu*4/9*(suhu-32);
    else if (suhu_awal=='K' && suhu_tujuan=='C')
        hasil=suhu-273;
    else if (suhu_awal=='K' && suhu_tujuan=='R')
        hasil=suhu*4/5*(suhu-273);
    else
        printf ("invalid input");
    return hasil;
}
