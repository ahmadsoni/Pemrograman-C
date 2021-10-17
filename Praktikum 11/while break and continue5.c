#include <stdio.h>
#include <stdlib.h>

void main () {
    int i=1, data, term=1, n=1;
    printf ("Masukkan banyak perulangan : ");
    scanf ("%d", &data);

    for (i=1; i<=data; i++){
        for (n=1; n<6; n++){
            printf ("%d\t", n);
        }
        printf ("\n");
    }
}
