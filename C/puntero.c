#include <stdio.h>

int main(){
    int num; int *puntero;
    num=100;
    puntero=&num;
    printf("Direccion de memoria: %p",puntero);
    printf("\n Valor del puntero: %d",*puntero);
    return 0;
}//main