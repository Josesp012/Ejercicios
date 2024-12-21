/*Descuento de una compra*/
#include <stdio.h>
float dc(float compra, int descuento);  
int main(){
    float compra, total;
    int descuento;
    printf("Escribe la compra "); scanf("%f",&compra);
    printf("Escribe el descuento "); scanf("%d",&descuento);
    total=dc(compra,descuento);
    printf("Total de la compra: %.2f",total);
}//main
float dc(float compra, int descuento){
    float total;
    total=compra-(compra*descuento)/100;
    return total;
}//descuentocompra