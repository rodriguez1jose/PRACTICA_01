// Materia: Programaci�n I, Paralelo 1

// Autor: Jose Joaquin Rodriguez Ojeda

// Fecha creaci�n: 22/08/2023

// Fecha modificaci�n: 22/08/2023

// N�mero de ejericio: 56

// Problema planteado: Generar (para un orden n):
//Sea n=5:
//1 0 1 0 1
//0 1 0 1 0
//1 0 1 0 1
//0 1 0 1 0
//1 0 1 0 1

#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"Ingrese el valor de n: ";
    cin>> n;

    // Generar la secuencia
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << (i + j) % 2 << " ";
        }
        cout <<endl;
    }
    return 0;
}


