//Nombre: Cristian Machado
//TP Nº: LAB 2021 2C - PRIMER PARCIAL - T 2

#include<iostream>
using namespace std;

int main(void)
{

    int ntanque, i, tanque_menor, dia_menor, mas_ocho_mil = 0;
    float li, lf, facdia, ldia, acudia1 = 0, acudia2 = 0, acudia3 = 0, litros_menor, acu_tanque = 0;
    bool band_men_litros = true, mayor_ocho = true;

    cout << "Ingrese el numero de tanque: ";
    cin >> ntanque;

    while (ntanque != 0)
    {

        mayor_ocho = true;
        acu_tanque = 0;

        //por tanque 3 dias
        for (i = 1; i <= 3; i++)
        {
            cout << "Ingrese la cantidad de litros al comienzo del dia " << i << ": ";
            cin >> li;

            cout << "Ingrese la cantidad de litros al final del dia " << i << ": ";
            cin >> lf;

            cout << "Ingrese la facturacion del dia " << i << ": ";
            cin >> facdia;

            //calculo lo vendido en ese dia
            ldia = li - lf;

            //PUNTO A: determino segun el dia, a que dia se acumula lo vendido
            switch (i)
            {
            case 1:
                acudia1 += ldia;
                break;
            case 2:
                acudia2 += ldia;
                break;
            case 3:
                acudia3 += ldia;
                break;
            }

            //Calculo punto B
            if (band_men_litros)
            {
                tanque_menor = ntanque;
                litros_menor = ldia;
                dia_menor = i;
                band_men_litros = false;
            }
            else if (ldia < litros_menor)
            {
                tanque_menor = ntanque;
                litros_menor = ldia;
                dia_menor = i;
            }

            //Acumulo los litros vendidos del tanque para punto C
            acu_tanque += ldia;

            //Calculo punto D, si vende al menos 1 vez, lo cuento una sola vez.
            if (ldia > 8000 && mayor_ocho)
            {
                mas_ocho_mil++;
                mayor_ocho = false;
            }

        }

        //Punto C, calculo el promedio y lo muestro
        cout << "El promedio de litros vendidos del tanque " << ntanque << " es de: " << (acu_tanque/3) << " lts." <<endl;

        //Ingreso un nuevo tanque o 0 para finalizar la carga.
        cout << "Ingrese el numero de tanque: ";
        cin >> ntanque;
    }

    //muestro punto A
    cout << "Dia 1: " << acudia1 << " lts." << endl;
    cout << "Dia 2: " << acudia2 << " lts." << endl;
    cout << "Dia 3: " << acudia3 << " lts." << endl;

    //muestro punto B
    cout << "El tanque que registro la menor cantidad de litros vendidos en un dia fue el " << tanque_menor << " que vendio " << litros_menor << " lts. el dia " << dia_menor << "." << endl;

    //muestro punto D
    cout << "La cantidad de tanques que vendieron mas de 8000 lts. en un dia fueron " << mas_ocho_mil << ". " << endl;

    //Punto E

    if (acudia1 > acudia2 && acudia1 > acudia3)
    {
        cout << "El dia 1 fue en el que se despacho mayor cantidad de litros.";
    }
    else if (acudia2 > acudia1 && acudia2 > acudia3)
    {
        cout << "El dia 2 fue en el que se despacho mayor cantidad de litros.";
    }
    else
    {
        cout << "El dia 3 fue en el que se despacho mayor cantidad de litros.";
    }

    return 0;
}
