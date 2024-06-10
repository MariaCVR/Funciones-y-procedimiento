//Utilice el bucle for para iterar desde 1 hasta ny verificar si cada número es primo utilizando la función EsPrimo.

#include <stdio.h>

// Función para verificar si un número es primo
int EsPrimo(int numero) {
    int contador = 0;
    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            contador++;
        }
    }
    if (contador == 2) {
        return 1; // El número es primo
    } else {
        return 0; // El número no es primo
    }
}

// Procedimiento para contar y mostrar los números primos hasta n
void ContarNumerosPrimos(int n) {
    printf("Los números primos hasta %d son: ", n);
    for (int i = 1; i <= n; i++) {
        if (EsPrimo(i) == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int numero;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    ContarNumerosPrimos(numero);

    return 0;
}
