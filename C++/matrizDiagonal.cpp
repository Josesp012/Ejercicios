#include <iostream>
using namespace std;

int main() {
  string diagonal[4][4];
  
  int filas=3,columnas=3;
/*cuadrado
for (int i = 0; i < filas; i++) {
  	for (int j = 0; j < columnas; j++) {
      if(j==0||i==0||i==columnas-1||j==filas-1){
        diagonal[i][j]="=";
        cout<<diagonal[i][j];
      }
      else{
      	diagonal[i][j]=" ";
        cout<<diagonal[i][j];
      }
	}
*/
 for (int i = 0; i < filas; i++) {
  	for (int j = 0; j < columnas; j++) {
      if(i==0&&j==filas-1||i==filas/2&&j==columnas/2||i==filas-1&&j==0){
        diagonal[i][j]="/";
        cout<<diagonal[i][j];
      }
      else{
      	diagonal[i][j]=" ";
        cout<<diagonal[i][j];
      }
	}
    cout<<"\n";
  }
  return 0;
}
