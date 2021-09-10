#include <iostream>
using namespace std;

/*
    Dado una lista que finaliza cuando se ingresa un numero par 
    y este sea positivo
    calcular e informar la cantidad de numeros ingresados
    
*/

int main() {
    int cantidad = 0;
    int numero=0, anterior, c=0;
    
     do{
         anterior = numero;

         cout << "Ingrese Numero: ";
         cin >> numero;         

         if (numero % 2 == 0) {
             cantidad++;
         }

         c++;

     }while ( c<2 || numero > anterior);

    cout << "Cantidad: " << cantidad << endl;

    return 0;
}