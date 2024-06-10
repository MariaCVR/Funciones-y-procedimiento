//Utilice el bucle for ara iterar desde 1 hasta ny solicitar al usuario que ingrese los números fraccionarios. 

#include <iostream>

using namespace std;

// Función para calcular la suma de una serie de números fraccionarios
float sumaFraccionarios(int n) {
    float suma = 0;

    for (int i = 1; i <= n; i++) {
        float numero;
        cout << "Ingrese el número fraccionario " << i << ": ";
        cin >> numero;
        suma += numero;
    }

    return suma;
}

int main() {
    int cantidad;

    cout << "Ingrese la cantidad de números fraccionarios a sumar: ";
    cin >> cantidad;

    float resultado = sumaFraccionarios(cantidad);

    cout << "La suma de los " << cantidad << " números fraccionarios es: " << resultado << endl;

    return 0;
}
