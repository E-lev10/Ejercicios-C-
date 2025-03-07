#include <iostream>
#include <vector>
#include <algorithm> // Para usar std::max_element

int main() {
    const int DIAS_SEMANA = 7;
    std::vector<double> ventas(DIAS_SEMANA);
    double totalVentas = 0;
    int diasSinVentas = 0; // Contador de días sin ventas

    // Ingresar las ventas de cada día
    for (int i = 0; i < DIAS_SEMANA; ++i) {
        std::cout << "Ingrese las ventas del dia " << i + 1 << ": ";
        std::cin >> ventas[i];
        totalVentas += ventas[i];

        // Contar días sin ventas
        if (ventas[i] == 0) {
            diasSinVentas++;
        }
    }

    // Mostrar el total de ventas de la semana
    std::cout << "\nEl total de ventas de la semana es: " << totalVentas << std::endl;

    // Encontrar el día con mayores ventas
    auto maxVentas = std::max_element(ventas.begin(), ventas.end());
    int diaMaxVentas = std::distance(ventas.begin(), maxVentas) + 1;
    std::cout << "El dia con mayores ventas fue el dia " << diaMaxVentas << " con " << *maxVentas << " ventas." << std::endl;

    // Indicar cuántos días no hubo ventas
    std::cout << "Dias sin ventas: " << diasSinVentas << std::endl;

    return 0;
}