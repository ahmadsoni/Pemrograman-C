#include <stdio.h>
#include <stdlib.h>

void main (){
    char alphabet, jawab='y';
    do {
        while (alphabet!=1){
            alphabet=getchar();
            if (alphabet=='\n')
                break;
        fflush(stdin);
        printf ("Apakah anda ingin mengetik lagi (y/t) ? ");
        scanf (" %c", &jawab);
        if (jawab=='t')
            exit(0);
        fflush(stdin);
        }
    } while (jawab=='y');
}
