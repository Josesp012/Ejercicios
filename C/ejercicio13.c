//Insertar valores con arreglos
#include <stdio.h>

int main(){
    int arreglo[10];
    for (int i = 0; i < 10; i++){
        printf("inserta el valor %d \n",i+1);
        scanf("%d",&arreglo[i]);
    }//for
    for (int j = 0; j < 10; j++){
        printf("\nel valor %d fue %d",j+11,arreglo[j]);
    }//for
    return 0;
}//main