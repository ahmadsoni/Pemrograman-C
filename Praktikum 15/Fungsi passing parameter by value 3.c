#include <stdio.h>
#include <stdlib.h>
void main()
{
  int bil,i,hasil=0;
  printf("Masukkan sebuah bilangan : ");
  scanf("%d", &bil);

  for (i=1; i<=bil; i++){
       if (i%2==0){
            hasil=hasil+i;
       }
  }
  printf("Jumlah Bilangan genap sampai ke dengan %d = %d\n ",bil , hasil);
}
