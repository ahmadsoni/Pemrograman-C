#include <stdio.h>
#include <stdlib.h>

void main () {
    int bil, i;
    char jawab;

    do {
    printf ("Inputkan batas sebuah bilangan : ");
    scanf ("%d", &bil);
        for (i=1; i<bil; i++){
            if (i%2!=0){
                if(i%7==0){
                    i++;
                    continue;
                }
                else if (i%11==0){
                    i++;
                    continue;
                }
                else
                    printf ("%d  ", i);
            }
                else if (i==bil)
                    break;
    }
    fflush(stdin);
    printf ("\n");
    printf ("Apakah anda ingin menginputkan lagi (y/t) ? ");
    scanf (" %c", &jawab);
    if (jawab=='t')
        exit(0);
    fflush(stdin);
    } while (jawab=='y');
}
