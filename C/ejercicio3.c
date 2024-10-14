//Determinar si el numero es par o impar
#include <stdio.h>

int main(){
    int n;
    printf("Escribe un numero "); scanf("%d",&n);
    if(n%2==0){ //Si el residuo de la division es igual a 0
        printf("El numero es par");
    }else{
        printf("El numero es impar");
    }//if else
}//main