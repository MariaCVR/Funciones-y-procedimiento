//Utilice el bucle while porque no0 se conoce cuantas veces se debe de iterar para encontrar el factorial. 
#include <stdio.h>
// Función para calcular el factorial de un número
long long calcularFactorial(int numero) {
    long long factorial = 1;
    // Calcular el factorial utilizando un bucle while
    int i = 1;
    while (i <= numero) {
        factorial *= i;
        i++;
    }
    return factorial;
}
int main() {
    int numero;
    printf("Ingrese un número: ");
    scanf("%d", &numero);
    long long factorial = calcularFactorial(numero);
    printf("El factorial de %d es: %lld\n", numero, factorial);
    return 0;
}
