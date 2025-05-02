#include <stdio.h>

int main(){
    int n=5, c=0;
    for(int i=1; i<=n;i++){
  	if(n%i==0){
    c++;
    }
    }
    if(c>2){
  	    printf("No es primo");
    }else{
  	printf("Es primo");
    }

  return 0;
}