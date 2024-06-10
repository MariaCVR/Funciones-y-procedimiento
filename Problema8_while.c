//Utilice while porque no se conoce la cantidad de terminos que se deben de multiplicar.
#include <stdio.h>
// Función para calcular el producto de los primeros n términos de una serie geométrica
float calcularProducto(int primerTermino, int razon, int n) {
    float producto = 1.0;
    int i = 0;
    // Calcular el producto utilizando un bucle while
    while (i < n) {
        producto *= primerTermino;
        primerTermino *= razon;
        i++;
    }

    return producto;
}
int main() {
    int primerTermino, razon, n;
    printf("Ingrese el primer término de la serie: ");
    scanf("%d", &primerTermino);
    printf("Ingrese la razón de la serie: ");
    scanf("%d", &razon);
    printf("Ingrese el número de términos a multiplicar: ");
    scanf("%d", &n);
    float producto = calcularProducto(primerTermino, razon, n);
    printf("El producto de los primeros %d términos de la serie geométrica es: %.0f\n", n, producto);
    return 0;
}
