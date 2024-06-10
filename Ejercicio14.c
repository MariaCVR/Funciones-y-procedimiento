//Utilice el bucle while para recorrer los numeros desde 1 hasta n.

#include <stdio.h>

// Función para calcular la suma de los cubos de los primeros n números
int sumaCubos(int n) {
    int i, suma = 0;

    // Bucle while para recorrer los números desde 1 hasta n
    i = 1; // Se inicializa la variable i en 1
    while (i <= n) {
        suma += i * i * i; // Sumar el cubo del número a la suma total
        i++;
    }

    return suma;
}

int main() {
    int numero;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    int resultado = sumaCubos(numero); // Cambio de nombre de la variable

    printf("La suma de los cubos de los primeros %d números es %d.\n", numero, resultado);

    return 0;
}
