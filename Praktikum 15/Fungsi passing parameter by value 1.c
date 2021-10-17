#include <stdio.h>
#include <stdlib.h>

int cek_bilangan(int, int);

void main () {
    int angka1, angka2;

    printf ("Masukkan dua bilangan(pisahkan dengan koma) : ");
    scanf ("%d, %d", &angka1, &angka2);
    if (cek_bilangan(angka1, angka2)==1)
        printf ("%d lebih besar daripada %d", angka1, angka2);
    else
        printf ("%d lebih besar daripada %d", angka2, angka1);
}

int cek_bilangan(int angka1, int angka2) {
    int indikator;
    if (angka1 > angka2)
        indikator=1;
    else
        indikator=0;
    return indikator;
}
