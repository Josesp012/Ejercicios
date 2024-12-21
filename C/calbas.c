#include <stdio.h>

float calculadora(int x, int y, char o);

int main(){
    int x, y; char o;
    printf("Ingrese operacion "); scanf("%c",&o);
    printf("numero uno "); scanf("%d",&x);
    printf("numero dos "); scanf("%d",&y);
    
    printf("respuesta: %.2f",calculadora(x, y, o));
    return 0;
}//main
float calculadora(int x, int y, char o){
    float z;
    switch (o){
    case '+':
        z=x+y;
        break;
    case '-':
        z=x-y;
        break;
    case '*':
        z=x*y;
        break;
    case '/':
        z=x/y;
        break;
    return z;
    }//switch
}//calculadora