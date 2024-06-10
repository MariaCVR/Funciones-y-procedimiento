//Utilice el bucle for porque se conoce el numero de interaciones que se van a realizar. 

#include <stdio.h>

// Función para determinar si un número es primo
int esPrimo(int numero) {
    int i;

    // Casos especiales: 0, 1 y números negativos no son primos
    if (numero <= 1) {
        return 0;
    }

    // Bucle for para comprobar si el número es divisible por algún otro número
    for (i = 2; i < numero; i++) {
        if (numero % i == 0) {
            return 0; // No es primo
        }
    }

    return 1; // Es primo
}

int main() {
    int numero;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    if (esPrimo(numero)) {
        printf("El número %d es primo.\n", numero);
    } else {
        printf("El número %d no es primo.\n", numero);
    }

    return 0;
}
