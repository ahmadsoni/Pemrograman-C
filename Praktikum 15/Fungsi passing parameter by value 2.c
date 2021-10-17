#include <stdio.h>
#include <stdlib.h>

int permutasi(int,int);
int kombinasi(int,int);

void main () {
    int n, r;
    printf ("n = ");
    scanf ("%d", &n);
    printf ("r = ");
    scanf ("%d", &r);
    printf ("Permutasi = %d\n", permutasi(n,r));
    printf ("Kombinasi = %d", kombinasi(n,r));
}

int permutasi (int n, int r){
    int i, j, hasil=1, hasil2=1, pengurangan=0, hasil_permutasi=0;
    for (i=1; i<=n; i++){
        hasil=hasil*i;
    }
    pengurangan=n-r;
    for (j=1; j<=pengurangan; j++){
        hasil2=hasil2*j;
    }
    hasil_permutasi=hasil/hasil2;
    return hasil_permutasi;
}
int kombinasi (int n, int r){
    int k, l, a, hasil=1, hasil2=1, hasil3=1, pembagi=0, pengurangan=0, hasil_kombinasi=0;
    for (k=1; k<=n; k++){
        hasil=hasil*k;
    }
    for (a=1; a<=r; a++){
        hasil3=hasil3*a;
    }
    pengurangan=n-r;
    for (l=1; l<=pengurangan; l++){
        hasil2=hasil2*l;
    }
    pembagi=hasil2*hasil3;
    hasil_kombinasi=hasil/pembagi;
    return hasil_kombinasi;
}
