/*Calcular el promedio de calificaciones de 10 estudiantes*/
#include <stdio.h>
int main(){
    int nota, sumaNotas=0, promedio=0;
    for (int i = 1; i <=10; i++){
        printf("\n Deme la nota "); scanf("%d",&nota);
        sumaNotas+=nota;
    }//for
    printf("\n La suma de notas es %d",sumaNotas);
    promedio=sumaNotas/10;
    printf("\n El promedio fue de %d",promedio);
}//main