/*Pograma que permita a un docente ingresar un total de notas que desea que la PC procese.
Luego podrá ingresar las notas una a una, las cuales son válidas solamente en el rango (0 - 100),
de lo contrario llamar la atención al docente e indicarle que debe ingresar nuevamente la nota.
Al finalizar el ingreso correcto de todas las notas, el programa le muestra al usuario estos resultados:
a) cantidad de notas aprobadas
b) cantidad de notas reprobadas
c) mayor nota de los alumnos reprobados
Autores: Priscila Selva y Jeyni Orozco
Version: Version inicial
Fecha: 24/05/2024
*/
#include <iostream>


using namespace std;


int main()
{
    int totalNotas;
    cout << "Ingrese el total de notas que desea procesar: ";
    cin >> totalNotas;


    // Declarar un arreglo estático para almacenar las notas
    int notas[totalNotas];
    int nota;


    // Ingresar las notas una por una con validación
    for (int i = 0; i < totalNotas; ++i)
    {
        do {
            cout << "Ingrese la nota #" << (i + 1) << ": ";
            cin >> nota;
            if (nota < 0 || nota > 100)
            {
                cout << "Nota invalida. Ingrese una nota en el rango (0 - 100)." << endl;
            }
        } while (nota < 0 || nota > 100);
        notas[i] = nota;
    }


    // Inicializar contadores y variables para resultados
    int aprobadas = 0, reprobadas = 0, mayorReprobada = -1;


    // Procesar las notas
    for (int i = 0; i < totalNotas; ++i)
    {
        if (notas[i] >= 70)
        {
            aprobadas++;
        } else {
            reprobadas++;
            if (notas[i] > mayorReprobada)
            {
                mayorReprobada = notas[i];
            }
        }
    }


    // Mostrar los resultados
    cout << "Cantidad de notas aprobadas: " << aprobadas << "\n";
    cout << "Cantidad de notas reprobadas: " << reprobadas << "\n";
    if (reprobadas > 0) {
        cout << "Mayor nota de los alumnos reprobados: " << mayorReprobada << "\n";
    } else {
        cout << "No hay notas reprobadas." << "\n";
    }


    return 0;
}
