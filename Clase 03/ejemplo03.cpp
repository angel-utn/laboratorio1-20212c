/**
A partir de cinco números enteros mayores a cero que se ingresen por teclado.
Calcular e informar el mayor de ellos.

NOTA: Los números son todos distintos entre sí.
*/
#include <iostream>
using namespace std;

int main(){
    int n, maxi=0;
    cout << "Ingresar número: ";
    cin >> n;
    if (n > maxi){
        maxi = n;
    }
    cout << "Ingresar número: ";
    cin >> n;
    if (n > maxi){
        maxi = n;
    }
    cout << "Ingresar número: ";
    cin >> n;
    if (n > maxi){
        maxi = n;
    }
    cout << "Ingresar número: ";
    cin >> n;
    if (n > maxi){
        maxi = n;
    }
    cout << "Ingresar número: ";
    cin >> n;
    if (n > maxi){
        maxi = n;
    }

    cout << "El más grande es: " << maxi << endl;

    return 0;
}
