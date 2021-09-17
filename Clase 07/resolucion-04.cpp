#include <iostream>
using namespace std;

int main(){
    int mes, pasajes, destino, anterior;
    float recaudacion;
    /// A
    int total_pasajes = 0;
    /// B
    int total_recaudacion;
    cout << "Destino: ";
    cin >> destino;

    while(destino != 0){
        anterior = destino;
        total_recaudacion = 0;

        while(destino == anterior){
            cout << "Mes: ";
            cin >> mes;
            cout << "Pasajes: ";
            cin >> pasajes;
            cout << "Recaudación: ";
            cin >> recaudacion;
            /// A
            total_pasajes+=pasajes;
            /// B
            total_recaudacion+=recaudacion;
            cout << endl << "---------------------" << endl;
            cout << "Destino: ";
            cin >> destino;
        }

        cout << endl << "Punto B" << endl;
        cout << "Destino : " << anterior << endl;
        cout << "Total recaudado : $ " << total_recaudacion << endl;
    }
    cout << endl << "Punto A" << endl;
    cout << "Total pasajes: " << total_pasajes << endl;
    return 0;
}
