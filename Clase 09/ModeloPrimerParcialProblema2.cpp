
/*Comentarios:
Problema2: El SENASA dispone de la información de algunas frutas y verduras exportadas en el año 2017 por la República Argentina. Por cada registro se ingresa:
Código de producto
Tipo ('F' - Fruta o 'V' - Verdura)
Cantidad de toneladas exportadas
Importe recaudado

La información no se encuentra ordenada ni agrupada. Hay un registro por cada producto. Para indicar el fin de la carga de información se ingresa un código de producto igual a cero.

Se pide calcular e informar:
A) El código de producto de la fruta que menos haya recaudado.
B) La cantidad de verduras cuyo precio por kilo haya sido menor a $100.
C) El tipo de producto que haya exportado la menor cantidad de toneladas.

NOTA: Una tonelada equivale a mil kilos.
*/

#include <iostream>
using namespace std;

#include <clocale>

int main(void){
	setlocale(LC_ALL, "Spanish");
	int codProducto;
	char tipo;
	float canToneladas;
	float importe;
	//PUNTO A
	int codMenor;
	float recaudacionMin;
	bool b = false;
	//PUNTO B
	int conB = 0;
	float precioPorKilo;
	//PUNTO C
	float acumVerduras, acumFrutas;
    acumVerduras = acumFrutas = 0;

	cout << "CÓDIGO DE PRODUCTO: ";
	cin >> codProducto;
	while(codProducto != 0){
        cout << "Tipo ('F' - Fruta o 'V' - Verdura): ";
        cin >> tipo;
        cout << "Cantidad de toneladas exportadas: ";
        cin >> canToneladas;
        cout << "Importe recaudado: ";
        cin >> importe;
        if(tipo == 'F'){
            if(b == false){
                codMenor = codProducto;
                recaudacionMin = importe;
                b = true;
            }
            else{
                if(recaudacionMin > importe){
                    codMenor = codProducto;
                    recaudacionMin = importe;
                }
            }
        }
        if(tipo == 'V'){
            precioPorKilo = (importe/canToneladas)/1000;
            if(precioPorKilo < 100){
                conB++;
            }
        }
        switch (tipo){
            case 'F':
                acumFrutas += canToneladas;
                break;
            case 'V':
                acumVerduras += canToneladas;
                break;
        }

        cout << "CÓDIGO DE PRODUCTO: ";
        cin >> codProducto;
	}
	cout << endl ;
    cout << "PUNTO A: " << endl;
    cout << "Código del producto de la fruta que menos haya recaudado: " << codMenor << endl << endl;
    cout << "-------- " << endl;
    cout << "PUNTO B: " << endl;
    cout << "Cantidad de Verduras: " << conB << endl << endl;
    cout << "-------- " << endl;
    cout << "PUNTO C: " << endl;
    if(acumFrutas > acumVerduras){
        cout << "Tipo de producto que exporto la menor cantidad de toneladas: V: VERDURA" << endl;
    }
    else{
        if(acumFrutas < acumVerduras){
            cout << "Tipo de producto que exporto la menor cantidad de toneladas: F: FRUTA" << endl;
        }
        else{
            cout << "Se exporto la misma cantidad de productos de ambos tipos." << endl;
        }
    }
	return 0;
}
