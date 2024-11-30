/*Teorema de pitagoras*/
#include <stdio.h>
#include <math.h>
int main(){
    float h, co, ca;
    printf("Introduce el valor de los catetos "); scanf("%f %f",&co,&ca);
    h=sqrt(pow(co,2)+pow(ca,2));
    printf("La hipotenusa es %f",h);
    return 0;
}//main