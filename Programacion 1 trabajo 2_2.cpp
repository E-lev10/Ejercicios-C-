// Programacion 1 trabajo 2_2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>  // Biblioteca estándar para entrada y salida
#include <vector>    // Biblioteca para manejar listas dinámicas (vectores)

using namespace std;

// Función que verifica si un número es primo
bool esPrimo(int num) {
    if (num < 2) return false;  // Los números menores a 2 no son primos
    for (int i = 2; i * i <= num; i++) {  // Revisar divisibilidad hasta la raíz cuadrada de num
        if (num % i == 0) return false;  // Si es divisible, no es primo
    }
    return true;  // Si no se encontró divisor, es primo
}

int main() {
    int N;  // Variable para almacenar la cantidad de números primos a generar

    // Solicitar al usuario un número entero positivo
    cout << "Ingrese un numero entero positivo : ";
    cin >> N;

    vector<int> primos;  // Vector para almacenar los números primos encontrados
    int numero = 2;  // Iniciamos la búsqueda de primos desde el número 2

    // Generar los primeros N números primos
    while (primos.size() < N) {
        if (esPrimo(numero)) {  // Si el número es primo, lo agregamos al vector
            primos.push_back(numero);
        }
        numero++;  // Pasamos al siguiente número para verificar si es primo
    }

    // Imprimir los números primos generados
    cout << "Los numeros primos de : " << N << " Son : ";
    for (int primo : primos) {
        cout << primo << " ";
    }
    cout << endl;

    return 0;  // Indicar que el programa finalizó correctamente
}


