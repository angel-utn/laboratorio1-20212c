/**
  Un negocio dispone de tres formas de pago distintas y cada una de ellas dispone
  de descuentos o recargos.
  - 'E' Efectivo : 20% de descuento
  - 'T' Tarjeta : 40% de recargo
  - 'Q' QR: 50% de descuento si el monto es mayor a $10000.

  Dada la cantidad de unidades vendidas, el precio unitario y la forma de pago.
  Calcular e informar el importe neto a pagar.
*/
#include <iostream>
using namespace std;

int main(){
  int unidades;
  float pu, importe;
  char fp;

  cout << "Ingresar unidades vendidas :";
  cin >> unidades;
  cout << "Ingresar precio unitario: ";
  cin >> pu;
  cout << "Ingresar forma de pago: ";
  cin >> fp;

  importe = unidades * pu;

  switch(fp){
    case 'E':
    case 'e':
    case '1': //El 1 como carácter aplica 20% de descuento (Es como Efectivo)
      importe = importe * 0.8;
    break;
    case 'T':
    case 't':
      importe = importe * 1.4;
    break;
    case 'Q':
    case 'q':
    case 'B':
    case 'b':
      if (importe > 10000){
        importe = importe / 2;
      }
    break;
    default:
      cout << "No se reconoce la forma de pago. No se aplica descuento ni recargo." << endl;
    break;
  }

  cout << endl << "Importe: $" << importe << endl;


  return 0;
}
