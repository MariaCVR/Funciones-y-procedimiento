//Utilice el bucle for ara iterar desde 1 hasta ny calcular el número triangular correspondiente a cada valor de i.

#include <stdio.h>

// Función para calcular el n-ésimo número triangular
int CalcularNumeroTriangular(int n) {
    int numeroTriangular = 0;

    for (int i = 1; i <= n; i++) {
        numeroTriangular += i;
    }

    return numeroTriangular;
}

int main() {
    int n;

    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    int numeroTriangular = CalcularNumeroTriangular(n);

    printf("El %d-ésimo número triangular es: %d\n", n, numeroTriangular);

    return 0;
}

