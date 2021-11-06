#include <iostream>
using namespace std;

void cargarInformacion(float matriz[][5]){
    int sucursal, ubicacion, sabor, indice;
    float kilos, importe;

    cout << "Sucursal: ";
    cin >> sucursal;
    while(sucursal != 0){
        cout << "Ubicación (1 - Córdoba, 2 - Rosario, 3 - Capital Federal): ";
        cin >> ubicacion;
        cout << "Sabor (10 - Chocolate, 20 - Frutilla, 30 - Vainilla, 40 - Americana, 50 - Dulce de leche): ";
        cin >> sabor;
        cout << "Cantidad de kilos: ";
        cin >> kilos;
        cout << "Importe: $";
        cin >> importe;
        cout << "-----------------------------------------------" << endl;
        // A
        indice = sabor/10-1;
        matriz[ubicacion-1][indice] += kilos;
        cout << "Sucursal: ";
        cin >> sucursal;
    }
}

void puntoA(float matriz[][5]){
    int i, j;
    string ciudades[3];
    ciudades[0] = "Cordoba";
    ciudades[1] = "Rosario";
    ciudades[2] = "Capital Federal";

    string sabores[5] = {"Chocolate", "Frutilla", "Vainilla", "Americana", "Dulce de Leche"};

    for(i=0; i<3; i++){
        cout << "Ciudad: " << ciudades[i] << endl;
        for(j=0; j<5; j++){
            // cout << "Sabor: " << sabores[j] << endl;
            // cout << "Kilos: " << matriz[i][j] << endl;
            cout << "\t" << sabores[j] << "\t" << matriz[i][j] << endl;
        }
        cout << "-------------------------" << endl;
    }
}

int main(){
    float kilos[3][5]={};
    cargarInformacion(kilos);
    cout << endl << endl;
    puntoA(kilos);

    return 0;
}