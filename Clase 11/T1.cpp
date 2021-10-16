/* Martina Castro - Lab. I Parcial I*/

#include <iostream>
using namespace std;

int main (){
    int x, turno, leg, tipoc, contador=0, menor15=0,  mayorfacturno;
    float litros, imp, por1, por2, por3, litrosfinal=0, litros1=0, litros2=0, litros3=0,litrostotal=0, importeturno=0, mayorfac, promedioturno;
    bool tipo1=false, tipo2=false, tipo3=false, comparador=false;
    for(x=1;x<=10;x++){
            cout<< "Numero de legajo: ";
            cin>>leg;
            cout<< "Turno: ";
            cin>>turno;
            cout<< "Tipo de combustible: 1, 2 o 3: ";
            cin>>tipoc;
            cout<< "Litros: ";
            cin>> litros;
            cout<< "Importe: ";
            cin>> imp;

            while(leg!=0){

                litrosfinal+=litros;
                contador++;
                litrostotal+=litros;

                switch(tipoc){

            case 1:
                litros1+=litros;
                if(turno==3){
                    tipo1=true;
                }
                break;

            case 2:
                litros2+=litros;
                if(turno==3){
                    tipo2=true;
                }
                break;

            case 3:
                litros3+=litros;
                if(turno==3){
                    tipo3=true;
                }
                break;

                }

                importeturno+=imp;

                if(litros<=15){
                    menor15++;
                }
            cout<< "Numero de legajo: ";
            cin>>leg;
            if(leg!=0){
            cout<< "Turno: "<< turno << endl;
            cout<< "Tipo de combustible: 1, 2 o 3: ";
            cin>>tipoc;
            cout<< "Litros: ";
            cin>> litros;
            cout<< "Importe: ";
            cin>> imp;
            }
            }

            promedioturno=litrostotal/contador;

            cout<< endl<< "Promedio de litros por venta en el turno: "<< promedioturno<< endl<< endl<< endl;

            litrostotal=0;
            contador=0;

            if(comparador!=false){
                if(importeturno>mayorfac){
                    mayorfac=importeturno;
                    mayorfacturno=turno;
                }
            }
            else{
                mayorfac=importeturno;
                mayorfacturno=turno;
                comparador=true;
            }

            importeturno=0;

            if(turno==3){
                if(tipo1==false){
                    cout<< "Combustible nro 1 no despachado en el turno 3."<< endl<< endl;
                }
                if(tipo2==false){
                    cout<< "Combustible nro 2 no despachado en el turno 3."<< endl<< endl;
                }
                if(tipo3==false){
                    cout<< "Combustible nro 3 no despachado en el turno 3."<< endl<< endl;
                }
            }





    }

    por1=(litros1*100)/litrosfinal;
    por2=(litros2*100)/litrosfinal;
    por3=(litros3*100)/litrosfinal;

    cout<< "Porcentaje de ventas combustible tipo 1: "<< por1<< endl<< endl;
    cout<< "Porcentaje de ventas combustible tipo 2: "<< por2<< endl<< endl;
    cout<< "Porcentaje de ventas combustible tipo 3: "<< por3<< endl<< endl;

    cout<< "El turno con mayor facturacion fue el nro "<< mayorfacturno<< " con un importe de $"<< mayorfac<< endl;

    cout<< "La cantidad de ventas en las que no se despacharon mas de 15 litros fue: "<< menor15;

        return 0;
}

