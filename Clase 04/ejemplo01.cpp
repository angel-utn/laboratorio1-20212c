/**
A partir del ingreso de 5 números enteros. Calcular e informar cuántos de ellos fueron positivos.
*/
#include <iostream>
using namespace std;

int main() {
    int i, n, pos;
    pos = 0;

    for(i=1; i<=5; i++) {
        cout << "Ingresar número: ";
        cin >> n;

        if (n > 0) {
            pos++;
        }
    }
    cout << endl << endl;
    cout << "Cantidad de positivos: " << pos << endl;

    return 0;
}
