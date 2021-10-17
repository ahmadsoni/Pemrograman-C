#include <stdio.h>
#include <stdlib.h>
void menu () {
    printf ("Pilihan menu\n");
}

void main() {
    int data, i;

    printf ("Ingin menapilkan function berapa kali? ");
    scanf ("%d", &data);

    for (i=0; i<data; i++){
        menu();
    }
}
