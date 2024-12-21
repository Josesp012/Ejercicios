//Calcular el area de 3 triangulos
#include <stdio.h>

int areaTriangulo(int b, int h);

int main(){
    int area1, area2, area3;
    area1=areaTriangulo(3,4);
    area2=areaTriangulo(5,7);
    area3=areaTriangulo(6,9);
    printf("area1=%d",area1);
    printf("\narea2=%d",area2);
    printf("\narea3=%d",area3);
}//main
int areaTriangulo(int b, int h){
    int area;
    area= (b*h)/2;
    return area; 
}//areaTriangulo