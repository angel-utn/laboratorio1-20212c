#include <iostream>
using namespace std;

int main(){
    int dias, horas, minutos, ingreso;
    int aux;

    cout << "Ingresar cantidad de minutos: ";
    cin >> ingreso;

    dias = ingreso / 1440;
    ingreso = ingreso - (dias * 1440);
    horas = ingreso / 60;
    ingreso = ingreso - (horas * 60);
    minutos = ingreso;

    cout << endl;
    cout << "Días: " << dias << endl;
    cout << "Horas: " << horas << endl;
    cout << "Minutos: " << minutos << endl;



    return 0;
}
