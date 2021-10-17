#include <stdio.h>
#include <stdlib.h>

void main(){
    int data, i;
    float nilai, min=0, maks=0, total=0, jumlah=0, ratarata;

    printf ("Berapa data yang ingin diinputkan ");
    scanf ("%d", &data);

    for (i=1; i<=data; i++){
        printf ("Masukkan nilai ke-%d : ", i);
        scanf ("%f", &nilai);
        if (nilai<min || min==0){
            min=nilai;
        }
        if (nilai>maks || maks==0){
            maks=nilai;
        }
        total=total+nilai;
        ratarata=total/data;
    }
    printf ("Nilai minimum = %.2f\n", min);
    printf ("Nilai maksimum = %.2f\n", maks);
    printf ("Nilai rata-rata = %.2f", ratarata);
}
