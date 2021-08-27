/**
Se dispone de la información de los cinco alumnos de la materia del ejercicio anterior. A partir de la lógica resuelta anteriormente, ingresar las notas de los cinco alumnos y calcular:

- La cantidad de promocionados, regularizados y recursantes.
- El promedio de calificaciones.
*/
#include <iostream>
using namespace std;
//#include <cstdio> // Para usar printf
//#include <iomanip>  // Para usar setprecision

int main(){
    const int ALUMNOS=2;
    int i;
    int nota1, nota2, nota3;
    // A
    int promociona=0, regulariza=0, recursa=0;
    // B
    int suma = 0;
    float promedio;


    for(i=1; i<=ALUMNOS; i++){
        cout << "Alumno #" << i << endl;
        cout << "Ingres la 1° nota: ";
        cin >> nota1;
        cout << "Ingres la 2° nota: ";
        cin >> nota2;
        cout << "Ingres la 3° nota: ";
        cin >> nota3;
        /// B
        //suma = suma + nota1 + nota2+ nota3;
        suma += nota1 + nota2 + nota3;

        /// A
        if (nota1>=8 && nota2>=8 && nota3>=8)
        {
            promociona++;
        }
        else
        {
            if ((nota1>=6 && nota2>=6) || (nota1>=6&&nota3>=6) || (nota2>=6 && nota3>=6))
            {
                regulariza++;
            }
            else
            {
                recursa++;
            }
        }
        cout << endl;
    }
    cout << endl << "Punto A" << endl;
    cout << "Promociona: " << promociona << endl;
    cout << "Regulariza: " << regulariza << endl;
    cout << "Recursa   : " << recursa << endl;

    cout << endl << "Punto B" << endl;

    /*
        int / int --> int
        float / int
        int / float    ---> float
        float / float
    */
    promedio = (float)suma / (3*ALUMNOS);
    cout << "Promedio: " << promedio << endl;

    // Alternativas para delimitar decimales
    //cout << fixed;
    //cout << "Promedio: " << setprecision(2) << promedio << endl;

    //printf("Promedio: %.2f", promedio);
    return 0;
}
