/*
Un horno para microondas dispone de la información para preparar correctamente un bife
de chorizo según el punto de cocción deseado.

Desde 10 hasta 19 minutos - Jugoso
Desde 20 hasta 25 minutos - A punto
Más de 25 minutos - Cocido

Dada la cantidad de segundos de cocción de un bife de chorizo indicar el punto obtenido por el horno.
*/
#include <iostream>
using namespace std;

int main(){
    int segundos, minutos;

    cout << "Cantidad de segundos de cocción: ";
    cin >> segundos;

    minutos = segundos / 60;

    if (minutos >= 10 && minutos <= 19){
        cout << "Jugoso";
    }
    else{
        if (minutos >= 20 && minutos <= 25){
            cout << "A punto";
        }
        else{
            cout << "Cocido";
        }
    }

    return 0;
}
