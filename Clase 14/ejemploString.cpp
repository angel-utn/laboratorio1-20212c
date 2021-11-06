#include <iostream>
using namespace std;
#include <string>

void mayusculas(string &cadena){
    int i;
    for(i=0; i < cadena.size(); i++){
        cadena[i] = toupper(cadena[i]);
    }
    cout << cadena << endl;
}

int main(){
    string jugadores[2];
    int i;
    for(i=0; i<2; i++){
        cout << "Jugador " << i+1 << ": ";
        getline(cin, jugadores[i]);
    }
    
    cout << endl << endl;
    mayusculas(jugadores[0]);
    mayusculas(jugadores[1]);
    cout << endl;
    cout << "Bienvenidos " << jugadores[0] << " y " << jugadores[1] << endl;

    return 0;
}