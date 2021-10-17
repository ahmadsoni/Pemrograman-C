#include <stdio.h>
#include <stdlib.h>

void main (){
    int i=1, bil, jumlah=0;

    printf ("Masukkan sebuah bilangan = ");
    scanf ("%d", &bil);
    printf ("Jumlah masing masing angka dari bilangan %d = ", bil);

    while (bil!=0){
        jumlah=jumlah+bil%10;
        if (i==1)
            printf ("%d ", bil%10);
        else
            printf ("+ %d ", bil%10);
        bil=bil/10;
        i++;
    }
    printf ("= %d\n", jumlah);
}
