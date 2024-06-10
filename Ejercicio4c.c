//Utilice el bucle while porque no sabemos cuantas veces debenmos de iterar para encontar la raíz cúbica. 
#include <stdio.h>
// Función para calcular la raíz cúbica de un número
int calcularRaizCubica(int numero) {
    int raiz_cubica = 1;
    while (raiz_cubica * raiz_cubica * raiz_cubica <= numero) {
        raiz_cubica++;
    }
    raiz_cubica--;
    return raiz_cubica;
}
int main() {
    int numero, raiz_cubica;
    printf("Ingrese un número: ");
    scanf("%d", &numero);
    raiz_cubica = calcularRaizCubica(numero);
    printf("La raíz cúbica de %d es: %d\n", numero, raiz_cubica);
    return 0;
}