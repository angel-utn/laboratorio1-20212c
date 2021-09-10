#include <iostream>
using namespace std;

int main(){
    const int DESTINOS = 3;
    const int MESES = 4;
    int i, j;
    int destino, mes, pasajes;
    float recaudado;
    // A
    int totalPasajes = 0;
    // B
    float totalRecaudado;

    for(i=1; i<=DESTINOS; i++){
        totalRecaudado = 0;

        for(j=1; j<=MESES; j++){
            cout << "Destino: ";
            cin >> destino;
            cout << "Mes: ";
            cin >> mes;
            cout << "Pasajes: ";
            cin >> pasajes;
            cout << "Recaudación: $";
            cin >> recaudado;

            // A
            totalPasajes += pasajes;

            // B
            totalRecaudado += recaudado;

            cout << endl;
        }
        cout << endl << "Punto B" << endl;
        cout << "Recaudación $ " << totalRecaudado << endl << endl;
    }

    cout << endl << "Punto A" << endl;
    cout << "Total pasajes  " << totalPasajes<< endl;

    return 0;
}
