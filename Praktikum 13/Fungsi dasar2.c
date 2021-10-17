#include <stdio.h>
#include <stdlib.h>

void triangular (int);

void main(){
    int data, bil, i;

    printf ("Masukkan sebuah bilangan ");
    scanf ("%d", &data);
    triangular(data);
}

void triangular (int data){
    int bil=0, i;
    for (i=1; i<=data; i++){
        bil=bil+i;
        if (i!=data){
            printf ("%d + ", i);
        }
        else if (i==data){
            printf ("%d = ", i);
    }
    }
    printf ("%d", bil);
}
