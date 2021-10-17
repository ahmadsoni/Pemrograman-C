#include <stdio.h>
#include <stdlib.h>

void main () {
    int bil, i;

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
}
