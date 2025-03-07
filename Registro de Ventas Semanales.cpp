#include <iostream>  // Biblioteca para entrada y salida estándar (cin, cout)
#include <vector>    // Biblioteca para usar vectores (arrays dinámicos)
#include <algorithm> // Biblioteca para usar funciones como std::max_element

int main() {
    const int DIAS_SEMANA = 7; // Constante que define el número de días en una semana
    std::vector<double> ventas(DIAS_SEMANA); // Vector para almacenar las ventas de cada día
    double totalVentas = 0; // Variable para acumular el total de ventas de la semana
    int diasSinVentas = 0;   // Contador para llevar la cuenta de días sin ventas

    // Bucle para ingresar las ventas de cada día
    for (int i = 0; i < DIAS_SEMANA; ++i) {
        std::cout << "Ingrese las ventas del dia " << i + 1 << ": "; // Pide al usuario ingresar las ventas del día
        std::cin >> ventas[i]; // Almacena las ventas en el vector
        totalVentas += ventas[i]; // Suma las ventas al total de la semana

        // Verifica si el día no tuvo ventas
        if (ventas[i] == 0) {
            diasSinVentas++; // Incrementa el contador de días sin ventas
        }
    }

    // Muestra el total de ventas de la semana
    std::cout << "\nEl total de ventas de la semana es: " << totalVentas << std::endl;

    // Encuentra el día con mayores ventas
    auto maxVentas = std::max_element(ventas.begin(), ventas.end()); // Busca el valor máximo en el vector
    int diaMaxVentas = std::distance(ventas.begin(), maxVentas) + 1; // Calcula el día correspondiente al valor máximo
    std::cout << "El dia con mayores ventas fue el dia " << diaMaxVentas << " con " << *maxVentas << " ventas." << std::endl;

    // Muestra cuántos días no hubo ventas
    std::cout << "Dias sin ventas: " << diasSinVentas << std::endl;

    return 0; // Indica que el programa terminó correctamente
}
