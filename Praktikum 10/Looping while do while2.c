#include <stdio.h>
#include <stdlib.h>

void main () {
    char jawab='y';
    int i=1, bil, total=0;
    do {
        printf ("Masukkan bilangan ke-%d : ", i);
        scanf ("%d", &bil);
        printf ("Mau memasukkan data lagi [y/n} ? ");
        scanf (" %c", &jawab);
        i++;
        total=total+bil;
        fflush(stdin);
    } while (jawab == 'y');
    if (jawab=='n'){
        printf ("Total bilangan = %d", total);
    }
}
