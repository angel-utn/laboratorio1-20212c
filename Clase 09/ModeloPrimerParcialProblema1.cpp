
/*Comentarios:
Porblema1: Un censo agropecuario recabó información de 10 productores a lo largo de los últimos 5 años. Por cada año y productor registró:
Código de productor
Número de año (1 a 5)
Cantidad de nacimientos de cerdos
Cantidad de nacimientos de ovejas
Cantidad de nacimientos de vacas

Los datos se encuentran agrupados por código de productor. Por cada productor, la información está ordenada por año. Se pide calcular e informar:
A) Por cada productor, la cantidad de años en que no haya producido cerdos.
B) El productor que menos animales haya producido en el primer año de trabajo.
C) El porcentaje de cerdos, ovejas y vacas producidos en total.
D) La cantidad de años en los que se hayan producido únicamente cerdos. un resultado, cantovejas=cantvacas=0 && cantcerdos !=0
E) Los años en los que se produjeron cerdos. varios resultados

*/

#include <iostream>
using namespace std;

#include <clocale>

int main(){
	setlocale(LC_ALL, "Spanish");
    int codigoProductor, anio, cantCerdos, cantOvejas, cantVacas;
    const int PRODUCTORES = 10;
    const int ANIO = 5;
    //PUNTO A
    int conA = 0;
    //PUNTO B
    int conB = 0, minCant, codProdMin;
    //PUNTO C
    int  acumCerdos, acumOvejas, acumVacas, total;
    acumOvejas = acumCerdos = acumVacas = 0;
    //PUNTO D
    bool anio1, anio2, anio3, anio4, anio5;
    anio1 = anio2 = anio3 = anio4 = anio5 = false;
    int conAnio = 0;
    //PUNTO E
    bool ban1, ban2, ban3, ban4, ban5;
    ban1 = ban2 = ban3 = ban4 = ban5 = false;

    for(int i=0; i<PRODUCTORES; i++){
        cout << "Código de productor: ";
        cin >> codigoProductor;
        for(int j=0; j<ANIO; j++){
            cout << "AÑO " << j + 1 << ": " << endl;
            cout << "Cantidad de nacimientos de cerdos: ";
            cin >> cantCerdos;
            cout << "Cantidad de nacimientos de ovejas: ";
            cin >> cantOvejas;
            cout << "Cantidad de nacimientos de vacas: ";
            cin >> cantVacas;
            if(cantCerdos == 0){
                conA++;
            }
            if(j == 0){
                conB += cantCerdos + cantOvejas + cantVacas;
            }
            acumCerdos += cantCerdos;
            acumOvejas += cantOvejas;
            acumVacas += cantVacas;
            if(cantCerdos == 0){
                switch (j){
                    case 0:
                        anio1 = true;
                        break;
                    case 1:
                        anio2 = true;
                        break;
                    case 2:
                        anio3 = true;
                        break;
                    case 3:
                        anio4 = true;
                        break;
                    case 4:
                        anio5 = true;
                        break;
                }
            }
            if(cantCerdos > 0){
                switch (j){
                    case 0:
                        if(cantOvejas != 0 || cantVacas != 0){
                            anio1 = true;
                        }
                        ban1 = true;
                        break;
                    case 1:
                        if(cantOvejas != 0 || cantVacas != 0){
                            anio2 = true;
                        }
                        ban2 = true;
                        break;
                    case 2:
                        if(cantOvejas != 0 || cantVacas != 0){
                            anio3 = true;
                        }
                        ban3 = true;
                        break;
                    case 3:
                        if(cantOvejas != 0 || cantVacas != 0){
                            anio4 = true;
                        }
                        ban4 = true;
                        break;
                    case 4:
                        if(cantOvejas != 0 || cantVacas != 0){
                            anio5 = true;
                        }
                        ban5 = true;
                        break;
                }
            }

        }
        cout << "PUNTO A: " << endl;
        if(conA > 0){
            cout << "PRODUCTOR " << codigoProductor << ": " << conA << " años en que no haya producido cerdos." << endl;
        }
        else{
            cout << "PRODUCTOR " << codigoProductor << ": no hubo años sin producción de cerdos." << endl;
        }
        if(i == 0){
            minCant = conB;
            codProdMin = codigoProductor;
        }
        else{
            if(minCant > conB ){
                minCant = conB;
                codProdMin = codigoProductor;
            }
        }
        conA = 0;
        conB = 0;
    }
    cout << "-------- " << endl;
    cout << "PUNTO B: " << endl;
    cout << "PRODUCTOR CON MENOS PRODUCCIÓN EN EL PRIMER AÑO DE TRABAJO: " << codProdMin << endl;
    cout << "-------- " << endl;

    cout << "PUNTO C: " << endl;
    total = acumCerdos + acumOvejas + acumVacas;
    if(total > 0){
        cout << "PORCENTAJE DE CERDOS: " << (float)acumCerdos*100/total << "%" << endl;
        cout << "PORCENTAJE DE OVEJAS: " << (float)acumOvejas*100/total << "%" << endl;
        cout << "PORCENTAJE DE VACAS: " << (float)acumVacas*100/total << "%" << endl;
    }
    cout << "-------- " << endl;

    cout << "PUNTO D: " << endl;
    if(anio1 == false){
        conAnio++;
    }
    if(anio2 == false){
        conAnio++;
    }
    if(anio3 == false){
        conAnio++;
    }
    if(anio4 == false){
        conAnio++;
    }
    if(anio5 == false){
        conAnio++;
    }
    if(conAnio > 0){
        cout << "CANTIDAD DE AÑOS EN LOS QUE SE PRODUCIERON ÚNICAMENTE CERDOS: " << conAnio << endl;
    }
    else{
        cout << "NO HUBO AÑOS EN LOS QUE ÚNICAMENTE SE PRODUCIERON CERDOS." << endl;
    }
    cout << "-------- " << endl;

    cout << "PUNTO E: " << endl;
    cout << "AÑOS EN LOS QUE SE PRODUJERON CERDOS: "<< endl;
    if(ban1 == true){
        cout << "AÑO 1 " << endl;
    }
    if(ban2 == true){
        cout << "AÑO 2 " << endl;
    }
    if(ban3 == true){
        cout << "AÑO 3 " << endl;
    }
    if(ban4 == true){
        cout << "AÑO 4 " << endl;
    }
    if(ban5 == true){
        cout << "AÑO 5 " << endl;
    }
    if(!ban1 && !ban2 && !ban3 && !ban4 && !ban5){
        cout << "NO SE PRODUJERON CERDOS." << endl;
    }
	return 0;
}
