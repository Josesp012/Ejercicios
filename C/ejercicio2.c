/*
Realice un programa que determine cual es la nota final de un alumno
en una materia teniendo en cuenta que la nota final es el promedio
de 2 examenes. (obtener el promedio de los 2 examenes)
*/
#include <stdio.h>

int main() {
    float e1=0, e2=0; 
    //e1=5; e2=8; pruebas
    printf("primera nota \t"); scanf("%f",&e1);
    printf("segunda nota \t"); scanf("%f",&e2);
    float p=0;
    p=(e1+e2)/2;
    printf("nota final= %.2f \n",p);
    return 0;
}//main