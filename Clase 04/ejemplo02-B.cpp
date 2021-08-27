/// Autor: Roberto Rangoni
#include <iostream>
using namespace std;

int main()
{
    int nota1, nota2, nota3;
    cout << "Ingres la 1° nota; "; cin >> nota1;
    cout << "Ingres la 2° nota; "; cin >> nota2;
    cout << "Ingres la 3° nota; "; cin >> nota3;

    if (nota1>=8 && nota2>=8 && nota3>=8)
    {
        cout << "Promociona" << endl;
    }
    else
    {
        if ((nota1>=6 && nota2>=6) || (nota1>=6&&nota3>=6) || (nota2>=6 && nota3>=6))
        {
            cout << "regulariza" << endl;
        }
        else
        {
            cout << "Recursa" << endl;
        }
    }
    system("pause");
}
