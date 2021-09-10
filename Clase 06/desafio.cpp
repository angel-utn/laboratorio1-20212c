/**
Dada una lista de números enteros que finalice cuando deje de estar ordenada.
Calcular e informar la cantidad de números pares que la componen
(el número que finaliza la carga debe ser tenida en cuenta como número par)
 */
#include <iostream>
using namespace std;

int main(){
    bool ordenada;
    ordenada = true;

    int n, cpares=0, anterior, c=0;

    while (ordenada == true){
        cout << "Número: ";
        cin >> n; // xxxxx, 8, 4
        c++;
        // Cálculo de pares
        if (n%2==0){
            cpares++;
        }

        // Cálculo de lista creciente
        if(c>1 && n<anterior){
            ordenada = false;
        }
        anterior = n;
    }

    cout << endl << "La cantidad de pares fueron: " << cpares;
    return 0;
}
