#include <stdio.h>
#include <stdlib.h>

int ganjil (int);;

void main (){
    int bil;
    printf ("Masukkan sebuah bilangan : ");
    scanf ("%d", &bil);
    if (ganjil(bil)==0)
        printf ("Bilangan tersebut adalah bilangan genap");
    else
        printf ("Bilangan tersebut adalah bilangan ganjil");
}
int ganjil (int bil){
    int indikator;
    if (bil%2!=0)
        indikator=1;
    else
        indikator=0;
    return indikator;
}
