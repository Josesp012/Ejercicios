//Descomposicion de factores primos de un numero

/*
2,3,4,5,6,7,8
Sucesion numeros primos
2,3,5,7,11
1. Numero, iteracion=1

si i%2==0
contar 
*/
#include <stdio.h>
int main(){
    int n=6, c=1;
    for(int i=2; i<n;i++){
  	if(n%i==0){
    n/=i;
    printf("%d %d \n",i,n);
    }
    }
    /*
    if(c>2){
  	    printf("No es primo");
    }else{
  	printf("%d",n);
    }
    */
    
    

  return 0;
}