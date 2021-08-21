/**
Dada un número entero que se ingresa por teclado, determinar si el número es
positivo, negativo o cero.
*/
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Ingresar número: ";
    cin >> num;
    if (num > 0)
    {
        cout << "Positivo" << endl;
    }
    else
    {
        if (num == 0)
        {
            cout << "Cero" << endl;
        }
        else
        {
            cout << "Negativo" << endl;
        }
    }
    return 0;
}
