//Utilice el bucle while para iterar desde 1 hasta n 
//y calcular el factorial de cada número. Esto permite calcular los factoriales de los primeros nnúmeros y sumarlos.

#include <stdio.h>

// Función para calcular el factorial de un número
int CalcularFactorial(int numero) {
    int factorial = 1;

    for (int i = 1; i <= numero; i++) {
        factorial *= i;
    }

    return factorial;
}

// Procedimiento para calcular y mostrar la suma de los factoriales de los primeros n números
void CalcularSumaFactoriales(int n) {
    int suma = 0;

    for (int i = 1; i <= n; i++) {
        int factorial = CalcularFactorial(i);
        suma += factorial;
    }

    printf("La suma de los factoriales de los primeros %d números es: %d\n", n, suma);
}

int main() {
    int n;

    printf("Ingrese el valor de n: ");
    scanf("%d", &n);

    CalcularSumaFactoriales(n);

    return 0;
}
