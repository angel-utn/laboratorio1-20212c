#include <iostream>
using namespace std;

int main(){
    /*
    A    B    C
    v || f && f ---> ?
    (v || f) && f --- > ?

    */

    bool a, b, c, resultado;
    a = true;
    b = false;
    c = false;

    resultado = a || b && c;
    cout << "Resultado: " << resultado << endl;

    resultado = (a || b) && c;
    cout << "Resultado: " << resultado << endl;




    return 0;
}
