/*Calculadora de interes compuesto*/
#include <stdio.h>
int main (){
    double ahorro, adicion, interes, total=0; int anios=0;
    printf("ingrese sus ahorros a invertir "); scanf("%lf",&ahorro);
    printf("ingrese la adicion de la inversion anual "); scanf("%lf",&adicion);
    printf("ingrese el porcentaje de interes de la inversion "); 
    scanf("%lf",&interes);
    printf("ingrese la cantidad de años a invertir "); scanf("%d",&anios);
    total=ahorro;
    for (int i = 0; i < anios; i++){
        total+=adicion;
        total=total+(interes*total/100);
    }//for
    printf("en %d anios tendras %lf",anios,total);
    return 0;
}//main