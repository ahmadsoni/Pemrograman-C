#include <stdio.h>
#include <stdlib.h>

void main(){
    int i=1, n;
    char jawab;
    do {
    i=1;
    printf ("Inputkan bilangan ganjil ");
    scanf ("%d", &n);
        while (i<=n){
            if (i%2!=0){
                if (i%3==0){
                    i++;
                    continue;
                }
                else if (i%3!=0)
                    printf ("%d\t", i);
            }
        i++;
        }
    fflush(stdin);
    printf ("\n");
    printf ("Apakah anda ingin menginputkan lagi(y/t)? ");
    scanf (" %c", &jawab);
    if (jawab=='t')
        exit(0);
    fflush(stdin);
    } while (jawab=='y');
}

