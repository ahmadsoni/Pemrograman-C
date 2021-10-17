#include <stdio.h>
#include <stdlib.h>

void main(){
    int huruf_besar=0, huruf_kecil=0, karakter_angka=0, spasi=0;
    char karakter;
        printf ("Ketikkan kalimat sembarang= ");
        while (karakter!='\n'){
            scanf ("%c", &karakter);
            if (karakter==32){
                spasi++;
            }
            else if (karakter>64 && karakter<91)
                huruf_besar++;
            else if (karakter>96 && karakter<123)
                huruf_kecil++;
            else if (karakter>47 && karakter<58)
                karakter_angka++;
        }
        printf ("Jumlah huruf besar = %d\n", huruf_besar);
        printf ("Jumlah huruf kecil = %d\n", huruf_kecil);
        printf ("Jumlah angka = %d\n", karakter_angka);
        printf ("Jumlah spasi = %d", spasi);
}
