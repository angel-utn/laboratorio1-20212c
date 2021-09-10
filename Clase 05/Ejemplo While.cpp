#include <iostream>
using namespace std;

/*
    Dado una lista que finaliza cuando se ingresa un numero par 
    y este sea positivo
    calcular e informar la cantidad de numeros ingresados
    
*/

int main() {
    int cantidad = 0;
    int numero;

    cout << "Ingrese Numero: ";
    cin >> numero;
    
    //while (!(numero%2 == 0 && numero > 0)) {
     while (numero%2 != 0 || numero <= 0) {
        
        cantidad++;

        cout << "Ingrese Numero: ";
        cin >> numero;
    }

    cout << "Cantidad: " << cantidad << endl;

    return 0;
}