/*Tablas de multiplicar*/
#include <stdio.h>
int main(){
    int multiplo, resultado;
    printf("Ingrese un numero para mostrar la tabla "); scanf("%d",&multiplo);
    for (int i = 1; i <=10; i++){
        resultado = multiplo * i;
        printf("\n %d * %d = %d ",multiplo, i, resultado);
    }//for
    
}//main