//Utilice el bucle while porque no se conoce el numero de interaciones necesarias a realizar hasta que el resultado sea 0 
#include <stdio.h>

// Función para calcular el MCD de dos números
int calcularMCD(int numero1, int numero2) {
    int resto;

    // Utilizamos el algoritmo de Euclides para calcular el MCD
    while (numero2 != 0) {
        resto = numero1 % numero2;
        numero1 = numero2;
        numero2 = resto;
    }

    return numero1;
}

int main() {
    int numero1, numero2;

    printf("Ingrese el primer número: ");
    scanf("%d", &numero1);

    printf("Ingrese el segundo número: ");
    scanf("%d", &numero2);

    int mcd = calcularMCD(numero1, numero2);

    printf("El MCD de %d y %d es %d.\n", numero1, numero2, mcd);

    return 0;
}
