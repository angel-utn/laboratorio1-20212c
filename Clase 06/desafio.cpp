/**
Dados tres grupos de números enteros que finalice cuando deje de estar ordenada.
Calcular e informar la cantidad de números pares que componen cada grupo
(el número que finaliza la carga debe ser tenida en cuenta como número par)
 */
#include <iostream>
using namespace std;

int main(){
    bool ordenada;

    int n, cpares, anterior, c, i;

    for(i=1; i<=3; i++){
        ordenada = true;
        cpares = 0;
        c=0;

        cout << "Grupo #" << i << endl;
        cout << "----------------------" << endl;
        while (ordenada == true){
            cout << "Número: ";
            cin >> n;
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
        cout << endl << "La cantidad de pares del grupo fueron: " << cpares << endl << endl;
    }
    return 0;
}
