#include <stdio.h>
#include <stdlib.h>
float kuadrat (float);

void main(){
    float num, hasil;

    printf ("Masukkan sebuah bilangan : ");
    scanf ("%f", &num);
    hasil=kuadrat(num);
    printf ("Bilangan kuadrat dari %g adalah %g\n", num, hasil);
}

float kuadrat (float num){
    float bil_kuadrat;
    bil_kuadrat=num*num;
    return bil_kuadrat;
}
