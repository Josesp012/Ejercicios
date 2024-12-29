#include <stdio.h>
#include <ctype.h>
int main(){
    char c;
    printf("Ingrese una contraseña: "); scanf("%c",&c);
    if(isdigit(c)==1){
        printf("Es valido");
    }else{
        printf("No es valido");
    }//ifelse
    return 0;
}//main