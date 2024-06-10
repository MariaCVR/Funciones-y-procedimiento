//Utilizamos el bucle for porque si comocemos la cantidad de veces que se debe de repetir el
//calculo de la potencia. 
#include <stdio.h>
// Función para calcular la potencia de un número utilizando sumas sucesivas
int calcularPotencia(int base, int exponente) {
    int resultado = 1;
    // Bucle for para realizar las sumas sucesivas
    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }
    return resultado;
}
int main() {
    int base, exponente, potencia;
    printf("Ingrese la base: ");
    scanf("%d", &base);
    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);
    potencia = calcularPotencia(base, exponente);
    printf("La potencia de %d elevado a %d es: %d\n", base, exponente, potencia);
    return 0;
}
