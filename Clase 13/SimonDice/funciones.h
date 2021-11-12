#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/// Recibe un vector de enteros y le asigna valores al azar entre 1 y 6
void lanzarDados(int v[], int cant);

void mostrarDados(int v[], int cant );

int calcularMinimoVector(int numeros[], int cant);

int calcularMaximoVector(int numeros[], int cant);

int contarRepeticionesEnVector(int dadoFinal, int dados[], int cant);

int sumarVector(int v[], int tam);

int calcularPuntajeRonda(int v[], int tam);

int calcularPuntajeFinal(int v[], int tam, int puntajeActual, int dado);


#endif // FUNCIONES_H_INCLUDED
