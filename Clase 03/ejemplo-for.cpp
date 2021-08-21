#include <iostream>
using namespace std;

int main(){
    int n, maxi = 0, i;

  //for(inicialización; comparación; incremento)
    for(i=1; i<=5; i++){
        cout << "Ingresar número: ";
        cin >> n;
        if (n > maxi || i == 1){
            maxi = n;
        }
    }
    cout << endl << "El más grande es: " << maxi << endl;

    return 0;
}
