#include <stdio.h>
#include <stdlib.h>

int fungsicn(int);
int fungsisn(int);

void main(){
    int n, hasil_cn, hasil_sn;
    printf("Masukkan nilai n: ");
    scanf("%d", &n);
    printf ("Hasil fungsi cn dari n=%d adalah %d\n", n, fungsicn(n));
    printf ("Hasil fungsi sn dari n=%d adalah %d", n, fungsisn(n));

}

int fungsicn(int n){
    int hasil=0;
    int i;
    for (i=0;i<=n;i++){
        hasil=2*hasil+1;
    }
    return hasil;
}
int fungsisn(int n){
    int hasil=0;
    int i;
    int bil=0;
    for (i=1;i<=n;i++){
        hasil=hasil+bil;
        bil++;
    }
    return hasil;
}
