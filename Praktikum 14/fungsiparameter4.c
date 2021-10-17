#include <stdio.h>
#include <stdlib.h>

float radian (float);

void main () {
    float derajat;
    printf ("derajat = ");
    scanf ("%f", &derajat);
    printf ("derajat dalam radian = %g", radian(derajat));
}

float radian (float derajat){
    float radian=1;
    float PI=3.14159f;
    radian=derajat/180.0f*PI;
    return radian;
}
