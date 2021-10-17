#include <stdio.h>
#include <stdlib.h>

void main(){
    int n, bil=0, jumlah=0;

    printf ("Masukkan bilangan ke-");
    scanf ("%d", &n);
    for (bil=0; bil<n; bil++){
        jumlah=jumlah+bil;
        printf ("%d ", jumlah);
    }
}
