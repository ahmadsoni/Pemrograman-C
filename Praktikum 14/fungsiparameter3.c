#include <stdio.h>
#include <stdlib.h>

int prima (int);

void main () {
    int bil, result;
    printf ("n = ");
    scanf ("%d", &bil);
    if (bil==2)
        printf ("%d adalah bilangan prima", bil);
    else if (prima(bil)==1)
        printf ("%d adalah bilangan prima", bil);
    else if (prima(bil)==0)
        printf ("%d bukan bilangan prima", bil);
}

int prima (int bil) {
    int indikator, i;
    for (i=2; i<bil; i++){
        if (bil%i==0){
            indikator=0;
            break;
        }
        else
            indikator=1;
    }
    return indikator;
}
