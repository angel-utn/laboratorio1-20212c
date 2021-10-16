/*
Parcial numero 1.

Alumno: Ramirez, Emiliano
*/

#include <iostream>

using namespace std;

int main()
{

    setlocale(LC_ALL, "Spanish");

    const int PLAYEROS = 5;
    int numeroPlayero = 0;
    int dia = 0;
    int numCombustible = 0;
    float litrosVend = 0;
    float importe = 0;

    // Punto A
    float promQuinc1 = 0;
    int ventasQuin1 = 0;
    float cantQuin1 = 0;
    float promQuinc2 = 0;
    int ventasQuin2 = 0;
    float cantQuin2 = 0;

    // Punto B
    bool ventaComb1 = false;
    bool ventaComb2 = false;
    bool ventaComb3 = false;

    // Punto C
    bool max = false;
    int mayorNumComb = 0;
    float mayorCantLitVend = 0;

    // Punto D
    float acuComb3 = 0;

    // Punto E
    float totalComb1 = 0;
    float totalComb2 = 0;
    float totalComb3 = 0;

    for (int i = 1; i <= PLAYEROS; i++)
    {
        
        max = false;
        mayorNumComb = 0;
        mayorCantLitVend = 0;
        // Reinicializo acumulador del Punto D
        acuComb3 = 0;

        cout << "Ingrese número de playero: ";
        cin >> numeroPlayero;

        cout << "Ingrese día: ";
        cin >> dia;

        while (dia != 0)
        {

            cout << "Ingrese número de combustible: ";
            cin >> numCombustible;

            cout << "Ingrese litros vendidos: ";
            cin >> litrosVend;

            cout << "Ingrese importe: ";
            cin >> importe;

            // Desarrollo Punto A
            if (dia < 16)
            {
                cantQuin1 = cantQuin1 + importe;
                ventasQuin1++;
            }
            else
            {
                cantQuin2 = cantQuin2 + importe;
                ventasQuin2++;
            }

            // Desarrollo Punto B y Punto E
            
            switch (numCombustible)
                {
                case 1:
                    if (dia == 5)
                    {
                        ventaComb1 = true;
                    }
                    totalComb1 = totalComb1 + importe;
                    break;
                case 2:
                    if (dia == 5)
                    {
                        ventaComb2 = true;
                    }

                    totalComb2 = totalComb2 + importe;
                    break;
                case 3:
                    if (dia == 5)
                    {
                        ventaComb3 = true;
                    }

                    totalComb3 = totalComb3 + importe;
                    // Desarrollo Punto D
                    acuComb3 = acuComb3 + litrosVend;
                    break;
                }
            
            // Desarrollo Punto C
            if (max == false)
            {
                max = true;
                mayorNumComb = numCombustible;
                mayorCantLitVend = litrosVend;
            }
            else
            {
                if (litrosVend > mayorCantLitVend)
                {
                    mayorNumComb = numCombustible;
                    mayorCantLitVend = litrosVend;
                }
            }
            cout << "-" << endl; 
            cout << "Ingrese día: ";
            cin >> dia;

        }

        // Punto C
        cout << endl << "-- Punto C --" << endl;
        cout << "Playero n°: " << numeroPlayero << endl << endl;
        cout << "\tMayor cantidad de litros en una venta: " << mayorCantLitVend << endl;
        cout << "\tNúmero de combustible: " << mayorNumComb << endl;
        cout << "-----" << endl << endl;


        // Punto D
        if (acuComb3 < 2000)
        {
            cout << "-- Punto D --" << endl;
            cout << " El numero de playero " << numeroPlayero << " no vendió mas de 2000 lts del combustible 3." << endl;
            cout << "-----" << endl << endl;
        }
        
    }

    // Punto A
    promQuinc1 = cantQuin1 / ventasQuin1;
    promQuinc2 = cantQuin2 / ventasQuin2;

    cout << "-- Punto A: Promedio de facturación para cada quincena -- " << endl;
    cout << "-----" << endl;
    cout << "\tQuincena 1: $" << promQuinc1 << endl;
    cout << "\tQuincena 2: $" << promQuinc2 << endl;
    cout << "-----" << endl;

    // Punto B
    cout << "-- Punto B: Numeros de combustible no vendidos el día 5 --" << endl;
    if (ventaComb1 == false)
    {
        cout << "El combustible 1 no tuvo ventas el dia 5." << endl;
    }
    if (ventaComb2 == false)
    {
        cout << "El combustible 2 no tuvo ventas el dia 5." << endl;
    }
    if (ventaComb3 == false)
    {
        cout << "El combustible 3 no tuvo ventas el dia 5." << endl;
    }

    // Punto E
    cout << "-----" << endl << endl;
    cout << "-- Punto E --" << endl;

    if (totalComb1 > totalComb2 && totalComb1 > totalComb3)
    {
        cout << "El combustible 1 tuvo la mayor recaudación con $" << totalComb1 << endl;
    }
    else
    {
        if (totalComb2 > totalComb3)
        {
            cout << "El combustible 2 tuvo la mayor recaudación con $" << totalComb2 << endl;
        }
        else
        {
            cout << "El combustible 3 tuvo la mayor recaudación con $" << totalComb3 << endl;
        }
    }


    return 0;
}
