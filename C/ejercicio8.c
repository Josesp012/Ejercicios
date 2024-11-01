//Calcular la venta del dia
#include <stdio.h>
int main(){
    float VentaCliente, VentaTotal;
    do
    {
        printf("Ingresa una venta "); scanf("%f",&VentaCliente);
        VentaTotal+=VentaCliente; // VentaTotal= VentaTotal + VentaCliente
    } while (VentaCliente!=0);

    printf("La venta total es %f",VentaTotal);
    
}//main