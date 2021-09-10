/// Nombre:
// TP N°:3
// Ejercicio N°:11
// Comentarios:
/*Hacer un programa para ingresar una lista de 8 números y luego
informar si todos están ordenados en forma creciente.
n caso de haber dos números “empatados” considerarlos como crecientes.
Por ejemplo si la lista fuera:
Ejemplo 1: -10, 1, 5, 7, 15, 18, 20, 23 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 2: 10, 10, 15, 20, 25, 25, 28, 33 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 3: 10, 1, 15, 7, -15, 18, 20, 23 se emitirá un cartel: “Conjunto No Ordenado”
*/

#include <iostream>
using namespace std;

// Banderas
int main(void) {
    const int CANT = 4;
    int n, anterior, i;
    bool ordenado = true; // 1 - true ; 0 - false

    for (i = 0; i < CANT; i++) {
        cout << "Ingrese un numero: ";
        cin >> n;
        
        if (i != 0 && n < anterior) {
            ordenado = false;
        }

        anterior = n;
    }

    if (ordenado == true) {
        cout << "Conjunto ordenado." << endl;
    }
    else {
        cout << "Conjunto no ordenado." << endl;
    }

    return 0;

}