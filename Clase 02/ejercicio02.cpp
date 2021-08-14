/**
Hacer un programa que solicite por teclado que se ingresen dos números y luego guardarlos en dos variables distintas. A continuación se deben intercambiar mutuamente los valores en ambas variables y mostrarlos por pantalla. Ejemplo: Suponiendo que se ingresan 3 y 8 como valores y que la variables usadas son A y B, entonces A=3 y B=8, pero luego debe quedar A=8 y B=3.
*/
#include <iostream>
using namespace std;

int main(){
  int a, b, c;

  cout << "Ingresar dos números :" << endl;
  cin >> a;
  cin >> b;
  cout << "A: " << a << endl;
  cout << "B: " << b << endl;
  c = a;
  a = b;
  b = c;
  cout << endl;
  cout << "A: " << a << endl;
  cout << "B: " << b << endl;
  return 0;
}
