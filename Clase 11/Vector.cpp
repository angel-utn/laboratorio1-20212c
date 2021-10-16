/**
    Cargar las calificaciones de 100 alumnos y
    mostrar cuántos y cuáles de ellas están por encima del promedio general de calificaciones.

    Fuentes lindas para programar (monoespaciadas):
    Cascadia, Consolas, Ubuntu Mono, Inconsolata (meh), Menlo (<3)
    Monospace Regular (Linux)
*/

#include <iostream>
using namespace std;

int main(){
    const int NOTAS = 150;
    int vec[NOTAS], i, suma=0, cant=0;
    float promedio;

    for(i=0; i<NOTAS; i++){
        cout << "Nota: ";
        cin >> vec[i];
    }
    for(i=0; i<NOTAS; i++){
        suma += vec[i];
    }
    promedio = (float)suma/NOTAS;

    cout << endl << "Notas mayores al promedio" << endl;
    for(i=0; i<NOTAS; i++){
        if(vec[i] > promedio){
            cant++;
            cout << vec[i] << endl;
        }
    }
    cout << endl << "Cantidad: " << cant;


}
