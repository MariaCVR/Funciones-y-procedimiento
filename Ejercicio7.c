//Utilice el bucle while porque no se conoce la cantidad de terminos que se deben de sumar. <
#include <stdio.h>
// Función para calcular la suma de los primeros n términos de una serie aritmética
int calcularSuma(int primerTermino, int diferencia, int n) {
    int suma = 0;
    int i = 0;
    // Calcular la suma utilizando un bucle while
    while (i < n) {
        suma += primerTermino + (i * diferencia);
        i++;
    }

    return suma;
}
int main() {
    int primerTermino, diferencia, n;
    printf("Ingrese el primer término de la serie: ");
    scanf("%d", &primerTermino);
    printf("Ingrese la diferencia entre los términos: ");
    scanf("%d", &diferencia);
    printf("Ingrese el número de términos a sumar: ");
    scanf("%d", &n);
    int suma = calcularSuma(primerTermino, diferencia, n);
    printf("La suma de los primeros %d términos de la serie aritmética es: %d\n", n, suma);
    return 0;
}
