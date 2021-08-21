/*10) Hacer un programa para ingresar cinco números enteros y listar el máximo de ellos*/
#include <iostream>
using namespace std;

int main() {
    int A;
    int B;
    int C;
    int D;
    int E;
    int M;
    M=0;
    cout << "Ingresar primer numero: ";
    cin >> A;
    cout << "Ingresar segundo numero: ";
    cin >> B;
    cout << "Ingresar tercer numero: ";
    cin >> C;
    cout << "Ingresar cuarto numero: ";
    cin >> D;
    cout << "Ingresar quinto numero: ";
    cin >> E;
    if (A<B) {
        M=B;
    } else {
        M=A;
    }

    if (M<C) {
        M=C;
    }

    if (M<D) {
        M=D;
    }

    if (M<E) {
        M=E;
    }

    cout << "El mayor numero es: "<< M;

}
