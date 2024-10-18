/*
Realizar una calculadora de indice de masa corporal (IMC)
IMC= peso/(altura^2)
IMC<18.5-->peso por debajo de lo normal
IMC 18.5-25-->peso saludable
IMC 25-30-->Sobrepeso
IMC>30-->Obesidad
*/
#include <stdio.h>
// #include <math.h>
int main(){
    float peso, altura, IMC;
    printf("Ingrese peso: "); scanf("%f",&peso);
    printf("Ingrese altura: "); scanf("%f",&altura);
    IMC = peso/(altura*altura);
    printf("\n Tu indice de masa corporal es de %.2f",IMC);
    if(IMC<18.5){
        printf("\n peso por debajo de lo normal");
    }else if(IMC >=18.5 && IMC <25){
        printf("\n peso saludable");
    }else if(IMC >=25 && IMC <30){
        printf("\n Sobrepeso");
    }if(IMC>30){
        printf("\n Obesidad");
    }//if else
    return 0;
}//main