/**
A partir de cinco números enteros mayores a cero que se ingresen por teclado.
Calcular e informar el mayor de ellos.

NOTA: Los números son todos distintos entre sí.
*/
#include <iostream>
using namespace std;

int main(){
    int n1, n2, n3, n4, n5;
    cout << "Ingresar número: ";
    cin >> n1;
    cout << "Ingresar número: ";
    cin >> n2;
    cout << "Ingresar número: ";
    cin >> n3;
    cout << "Ingresar número: ";
    cin >> n4;
    cout << "Ingresar número: ";
    cin >> n5;

    if (n1 > n2 && n1 > n3 && n1 > n4 && n1 > n5){
        cout << n1 << endl;
    }
    if (n2 > n1 && n2 > n3 && n2 > n4 && n2 > n5){
        cout << n2 << endl;
    }
    if (n3 > n1 && n3 > n2 && n3 > n4 && n3 > n5){
        cout << n3 << endl;
    }
    if (n4 > n1 && n4 > n2 && n4 > n3 && n4 > n5){
        cout << n4 << endl;
    }
    if (n5 > n1 && n5 > n2 && n5 > n3 && n5 > n4){
        cout << n5 << endl;
    }

    return 0;
}
