#include <stdio.h>
#include <ctype.h>

int main(){
    char cadena[80], *pcadena;
    puts("Ingrese una cadena en mayusculas ");
    gets(cadena);
    pcadena=cadena;
    puts("La cadena en minuscula es ");
    while (*pcadena !='\0'){
        printf("%c",tolower(*pcadena++));
    }//while
    
}//main