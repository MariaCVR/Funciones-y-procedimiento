//Utilice el bucle while porque no se conoce la cantidad de digitods que tiene el numero ingresado.
#include <stdio.h>
// Función para contar el número de dígitos de un número
int contarDigitos(int numero) {
    int contador = 0;
    // Bucle while para dividir el número por 10 en cada iteración
    while (numero != 0) {
        numero /= 10;
        contador++;
    }
    return contador;
}
int main() {
    int numero;

    printf("Ingrese un número: ");
    scanf("%d", &numero);
    int cantidadDigitos = contarDigitos(numero);
    printf("El número %d tiene %d dígitos.\n", numero, cantidadDigitos);
    return 0;
}
