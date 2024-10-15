/*Ejercicio dia de la semana con respecto a numeros*/
#include <stdio.h>

int main(){
    int dia;
    printf("ingrese un numero "); scanf("%d",&dia);

    switch (dia){
    case 1:/* constant-expression */
        printf("lunes");/* code */ 
        break;
    case 2:
        printf("Martes"); 
        break;
    case 3:
        printf("Miercoles"); 
        break;
    case 4:
        printf("Jueves"); 
        break;
    case 5:
        printf("Viernes"); 
        break;
    case 6:
        printf("Sabado"); 
        break;
    case 7:
        printf("Domingo"); 
        break;
    default:
        printf("No corresponde a ningun dia");
        break;
    }//switch
    return 0;
}//main