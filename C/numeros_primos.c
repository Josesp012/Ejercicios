#include <stdio.h>

int main(){
    int n=1, c=0;
    for(int i=2; i<=n;i++){
  	if(n%i==0){
    c++;
    }
    }
    if(c>2 || n==1){
  	    printf("No es primo");
    }else{
  	printf("Es primo");
    }

  return 0;
}