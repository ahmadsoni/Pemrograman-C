#include <stdio.h>

void main(){
    int batas,i,j,a=0;
    printf("Masukkan batas bilangan : ");
    scanf("%d",&batas);
    for(i=1; i<=batas; i++){
        for(j=1; j<=i; j++){
            a++;
            printf("%d ",a);
        }
        printf("\n");
    }
}
