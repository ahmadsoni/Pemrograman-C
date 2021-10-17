#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i=1, bil=2, faktor, data, bil_prima;
    printf("Masukkan bilangan prima ke-");
    scanf("%d", &data);
    do {
        for (faktor=2; faktor<bil; faktor++)
        {
            if (bil % faktor == 0)
            {
                bil_prima = 0;
                break;
            }
            else if (bil % faktor != 0)
            {
                bil_prima = 1;
            }
        }
        if (bil==2)
            printf ("2 ");
        else if(bil_prima==1)
        {
            printf("%d ", bil);
            i++;
        }
        bil++;
    } while(i <= data);
}
