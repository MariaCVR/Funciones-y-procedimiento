// Utilice el bucle while porque 
//no conocemos de antemano cuántas veces debemos iterar, es decir. 
//el bucle seguirá ejecutándose hasta que el divisor llegue a cero
#include <stdio.h>
// Función para obtener el inverso de un número
int obtenerInverso(int numero) {
    int inverso = 0;
    // Calcular el inverso del número
    while(numero != 0) {
        inverso = inverso * 10 + numero % 10;
        numero /= 10;
    }
    return inverso;
}
int main() {
    int numero, inverso;
    printf("Ingrese un número: ");
    scanf("%d", &numero);
    inverso = obtenerInverso(numero);
    printf("El inverso del número es: %d\n", inverso);
    return 0;
}