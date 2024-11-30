//arreglo con palabras utilizando ciclo
#include <stdio.h>
int main(){
    char *Vengadores[6];
    Vengadores[0]="Iron man";
    Vengadores[1]="Thor";
    Vengadores[2]="Hulk";
    Vengadores[3]="Capitan America";
    Vengadores[4]="Viuda Negra";
    Vengadores[5]="Ojo de Halcon";
    for (int i = 0; i < 6; i++)
    {
        printf("%s \n",Vengadores[i]);
    }//for
    
}//main