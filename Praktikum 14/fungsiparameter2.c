#include <stdio.h>
#include <stdlib.h>

int faktorial (int);

void main () {
    int bil;
    printf ("n = ");
    scanf ("%d", &bil);
    printf ("Hasil faktorialnya = %d", faktorial(bil));
}

int faktorial (int bil) {
    int hasil=1;
    int i;
    for (i=1; i<=bil; i++) {
        hasil=hasil*i;
    }
    return hasil;
}
