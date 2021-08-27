//Autor: Alberto Méndez
#include <iostream>
using namespace std;

int main() {
    int n, x, contadorprom, contadoregul;
    contadorprom=0;
    contadoregul=0;
    for (x=1;x<=3;x++){
        cout << "Ingrese la nota" << endl;
        cin >> n;
        if (n>=8){
            contadorprom++;
            contadoregul++;
        } else {
            if (n>=6){
                contadoregul++;
            }
        }
    }
    if (contadorprom==3){
         cout << "El alumno promociona la materia" << endl;
    } else {
        if (contadoregul>=2){
            cout << "El alumno regulariza la materia" << endl;
        } else {
            cout << "El alumno recursa" << endl;
        }
    }
return 0;
}
