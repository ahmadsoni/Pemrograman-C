#include <stdio.h>
#include <stdlib.h>

void main(){
    int i=1, n;
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
}
