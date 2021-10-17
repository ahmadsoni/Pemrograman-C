#include <stdio.h>
#include <stdlib.h>

void main(){
    int i;

    printf ("Masukkan sebuah huruf : ");
    scanf (" %c", &i);

    while (i<='X'){
        printf ("huruf %c\n", i);
        i++;
    }
}
