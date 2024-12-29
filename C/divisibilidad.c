//Divisibilidad entre 2 numeros
#include <stdio.h>

int main(){
    int x, y;
    printf("Ingrese 2 numeros: "); scanf("%d %d",&x,&y);
    if(x%y==0){
        printf("%d es divisible entre %d",x,y);
    }//if
}//main