#include <iostream>
using namespace std;

/*
    Dado una lista que finaliza cuando se ingresa un numero par
    y este sea positivo
    calcular e informar la cantidad de numeros ingresados

*/

int main() {
    int cpares = 0;
    int numero=0, anterior, c=0;

     do{
         anterior = numero;

         cout << "Ingrese Numero: ";
         cin >> numero;

         if (numero % 2 == 0) {
             cpares++;
         }

         c++;
     }while ( c<2 || numero > anterior);

    cout << "Cantidad: " << cpares << endl;

    return 0;
}
