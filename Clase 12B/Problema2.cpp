/*
Una consultora de software dispone de la información de todos los proyectos de software que han finalizado desde que fue fundada. Por cada proyecto registra:
- ID de Proyecto (número entero entre 10000 y 999999)
- Días estimados para su realización (entero)
- Días reales de realización (entero)
- Plataforma ('E' - Escritorio, 'W' - Web, 'M' - Mobile)

La información no tiene ningún orden o agrupamiento particular. Luego de haber ingresado todos los registros se ingresa un ID de Proyecto igual a cero para finalizar.
Se pide calcular e informar:
A) El ID de Proyecto que mayor cantidad de días de diferencia (entre lo estimado y lo real) haya registrado.
B) Indicar con un mensaje aclaratorio si la consultora ha desarrollado o no proyectos para todas las plataformas.
C) La plataforma que más proyectos finalizados sin demora haya registrado.
*/
#include <iostream>
using namespace std;
#include <cmath>

int main(){
    int idp, estimados, reales;
    char plataforma;
    //A
    int mayorDifencia=0, mayorProyecto, diferencia;
    //B
    bool escritorio = false, web = false, mobile = false;
    //C
    int cantEscritorio = 0, cantWeb = 0, cantMobile = 0;
    string maxPlataforma;

    cout << "ID de Proyecto: ";
    cin >> idp;

    while (idp != 0){
        cout << "Cantidad de días estimados: ";
        cin >> estimados;
        cout << "Cantidad de días reales: ";
        cin >> reales;
        cout << "Plataforma: ";
        cin >> plataforma;
        plataforma = toupper(plataforma);

        // A
        diferencia = abs(estimados - reales);
        if (diferencia >= mayorDifencia){
            mayorDifencia = diferencia;
            mayorProyecto = idp;
        }
        //B
        switch(plataforma){
            case 'E':
                escritorio = true;
            break;
            case 'W':
                web = true;
            break;
            case 'M':
                mobile = true;
            break;
        }
        //C
        if (reales <= estimados){
            switch(plataforma){
                case 'E':
                    cantEscritorio++;
                break;
                case 'W':
                    cantWeb++;
                break;
                case 'M':
                    cantMobile++;
                break;
            }
        }
        cout << "ID de Proyecto: ";
        cin >> idp;
    }
    cout << endl << "Punto A" << endl;
    cout << "Proyecto: " << mayorProyecto << endl;

    cout << endl << "Punto B" << endl;
    if (escritorio == true && web == true && mobile == true){
        cout << "Se desarrolló para todas las plataformas" << endl;
    }
    else{
        cout << "No se desarrolló para todas las plataformas" << endl;
    }
    cout << endl << "Punto C" << endl;
    if (cantEscritorio > cantMobile && cantEscritorio > cantWeb){
        maxPlataforma = "Escritorio";
    }
    else{
        if (cantMobile > cantWeb){
            maxPlataforma = "Mobile";
        }
        else{
            maxPlataforma = "Web";
        }
    }
    cout << "Plataforma: " << maxPlataforma << endl;
    return 0;
}
