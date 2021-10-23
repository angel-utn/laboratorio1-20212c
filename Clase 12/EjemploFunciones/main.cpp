#include <iostream>
using namespace std;

// Declaración de la función es_primo
void mostrar_primos_entre (int inicio, int fin);
bool es_primo(int numero);

int main() {
    int a = 10, b = 30;
    mostrar_primos_entre(a, b);

    return 0;
}

void mostrar_primos_entre (int inicio, int fin) {
    int i;
    bool r;
    for(i=inicio; i<=fin; i++) {
        r = es_primo(i);
        if (r == true) {
            cout << i << endl;
        }
    }
}

// Definición de es_primo
bool es_primo(int numero) {
    int i, c=0;
    for(i=1; i<=numero; i++) {
        if (numero % i == 0) {
            c++;
        }
    }
    if (c == 2) {
        return true;
    } else {
        return false;
    }
}
