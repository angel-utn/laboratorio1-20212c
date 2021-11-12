#include <iostream>
#include <cstdlib>
#include <ctime>

#include "funciones.h"

using namespace std;


int main()
{
    /// Aca declaramos todas las variables y constantes
    const int DADOS = 10;
    int i, puntaje, puntajeAcumulado=0, numero;
    string jugador; /// esto es el de C++ (por que es dinamico)
    int vDados[DADOS];

    srand(time(NULL));

    /// Pedir nombre
    cout << "Ingrese nombre del jugador: ";
    cin >> jugador;

    /// Comienzan las rondas
    /// Repetir 5 rondas
    for(i=1; i<=5; i++)
    {
        ///     Lanzar 5 Dados
        lanzarDados(vDados, DADOS);

        ///     Mostrar Dados
        mostrarDados(vDados, DADOS);

        ///     Calcular Puntaje de la Ronda
        ///         Buscar Minimo
        ///         Buscar Maximo
        ///         Sumar Dados
        ///         Puntaje es Suma * Minimo / Maximo
        puntaje = calcularPuntajeRonda(vDados, DADOS);

        ///     Mostrar Puntaje Calculado

        cout << endl <<  "Puntaje: " << puntaje << endl;

        ///     Acumular el puntaje calculado
        puntajeAcumulado += puntaje;
        /// Fin de Repetir
    }
    /// Mostramos el puntaje acumulado
    cout << endl << "Puntaje Acumulado: " << puntajeAcumulado << endl;

    cout << "----------- RONDA FINAL -------------" << endl;

    /// Pedir un numero N entre 1 y 6
    cout << "Ingrese Numero (1 y 6): ";

    /// TODO: Validar que este entre 1 y 6
    cin >> numero;

    /// Lanzar Dados
    lanzarDados(vDados, DADOS);

    /// Mostrar Dado
    mostrarDados(vDados, DADOS);


    /// Calcular puntaje final
    ///     Contar Coincidencias de N en Dados
    ///     Puntaje final es puntaje acumulado * cantidad de coincidencias

    /// Mostrar Nombre y Puntaje Final
    cout << endl << jugador << ", tu puntaje fue: "<<calcularPuntajeFinal(vDados, DADOS, puntajeAcumulado, numero)<<endl;


    return 0;
}
