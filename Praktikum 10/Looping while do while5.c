#include <stdio.h>
#include <stdlib.h>

void main(){
    int n=0, m=0;
    char a;
        printf ("Ketikkan kalimat sembarang= ");
        while (a!='\n'){
            scanf ("%c", &a);
            if (a==32){
                m++;
            }
            else {
                n++;
            }
        }
        printf ("Jumlah karakter = %d\n", n-1);
        printf ("Jumlah spasi = %d", m);
}
