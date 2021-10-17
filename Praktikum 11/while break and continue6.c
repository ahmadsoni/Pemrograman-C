#include <stdio.h>
#include <stdlib.h>

void main() {
    int i=1, banyakdata, n=1;

    printf ("Massukkan banyak data : ");
    scanf ("%d", &banyakdata);

    for (i=1; i<=banyakdata; i++){
        for (n=1; n<=i; n++){
            printf ("%d  ", i);
        }
        printf ("\n");
    }
}
