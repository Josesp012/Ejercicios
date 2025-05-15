#include <iostream>
using namespace std;

int main() {
  string diagonal[4][4];
  
  int filas=3,columnas=3;
  
  for (int i = 0; i < filas; i++) {
  	for (int j = 0; j < columnas; j++) {
      diagonal[i][j]="/";
      cout<<diagonal[i][j];
	}
    cout<<"\n";
  }
  return 0;
}
