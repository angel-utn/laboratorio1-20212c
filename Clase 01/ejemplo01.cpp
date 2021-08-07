/*
 Hacer un programa que permita ingresar dos números enteros
 por teclado. Luego calcular e informar la suma de ellos.
*/
#include <iostream>
using namespace std;

int main(){
    /*
    int n1;
    int n2;
    int resultado;
    */
    int n1, n2, resultado;
    cout << "Ingresar número: ";
    cin >> n1;
    cout << "Ingresar número: ";
    cin >> n2;

    resultado = n1 + n2;

    cout << endl << "El resultado de la suma es: " << resultado;
    return 0;
}
