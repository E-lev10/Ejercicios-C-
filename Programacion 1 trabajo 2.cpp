// Programacion 1 trabajo 2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>  // Biblioteca estándar para entrada y salida
#include <vector>    // Biblioteca para manejar listas dinámicas (vectores)
#include <limits>    // Biblioteca para manejar valores máximos y mínimos

using namespace std;

int main() {
    int N;  // Variable para almacenar el número de estudiantes

    // Solicitar al usuario el número de estudiantes
    cout << "Ingrese el numero de estudiantes: ";
    cin >> N;

    vector<int> calificaciones(N);  // Vector para almacenar las calificaciones
    int suma = 0;  // Variable para almacenar la suma de calificaciones
    int aprobados = 0, reprobados = 0;  // Contadores de aprobados y reprobados
    int calificacion_max = numeric_limits<int>::min();  // Inicializar la calificación máxima con el valor más bajo posible
    int calificacion_min = numeric_limits<int>::max();  // Inicializar la calificación mínima con el valor más alto posible

    // Leer las calificaciones de los estudiantes
    for (int i = 0; i < N; i++) {
        cout << "Ingrese la calificacion del estudiante " << i + 1 << ": ";
        cin >> calificaciones[i];

        suma += calificaciones[i];  // Sumar la calificación a la suma total

        // Verificar si la calificación es mayor que la máxima registrada
        if (calificaciones[i] > calificacion_max) {
            calificacion_max = calificaciones[i];
        }

        // Verificar si la calificación es menor que la mínima registrada
        if (calificaciones[i] < calificacion_min) {
            calificacion_min = calificaciones[i];
        }

        // Contar aprobados y reprobados
        if (calificaciones[i] >= 60) {
            aprobados++;
        }
        else {
            reprobados++;
        }
    }

    // Calcular el promedio de calificaciones
    double promedio = static_cast<double>(suma) / N;

    // Mostrar los resultados
    cout << "\nResumen de calificaciones:" << endl;
    cout << "Calificación mas alta: " << calificacion_max << endl;
    cout << "Calificación mas baja: " << calificacion_min << endl;
    cout << "Promedio de calificaciones: " << promedio << endl;
    cout << "Cantidad de estudiantes aprobados: " << aprobados << endl;
    cout << "Cantidad de estudiantes reprobados: " << reprobados << endl;

    return 0;  // Indicar que el programa finalizó correctamente
}
