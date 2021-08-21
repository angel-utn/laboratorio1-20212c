/**
  Un cine dispone de una tarifa normal de $900 y las siguientes promociones:

  - Niños con edad menor a 10 y adultos mayores a 70: 30% de descuento
  - Adultos con edad entre 20 y 30 (ambos inclusive): 10% de descuento.

  Dada la edad del cliente. Calcular el valor de la entrada.
*/
#include <iostream>
using namespace std;

int main(){
  int edad;
  const float PRECIO=900;
  float importe;
  cout << "Edad: ";
  cin >> edad;
  importe = PRECIO;
  if (edad < 10 || edad > 70){
    importe = PRECIO * 0.7;
  }
  else{
    if (edad >= 20 && edad <= 30){
      importe = PRECIO * 0.9;
    }
  }

  cout << "Importe a pagar: $" << importe;

  return 0;
}
