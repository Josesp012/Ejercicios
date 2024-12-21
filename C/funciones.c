//Calcular el area del triangulo
#include <stdio.h>

int areaTriangulo(int b, int h);

int main(){
    int area, b, h;
    printf("Dame el valor de la base "); scanf("%d",&b);
    printf("Dame el valor de la altura "); scanf("%d",&h);
    area=areaTriangulo(b, h);
    printf("El area del triangulo es %d",area);
}//main
int areaTriangulo(int b, int h){
    int area;
    area= (b*h)/2;
    return area; 
}//areaTriangulo