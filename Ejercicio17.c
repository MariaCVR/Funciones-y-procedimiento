//Utilice for para iterar desde 1 hasta n y solicitar al usuario que ingrese los números fraccionarios. 

#include <stdio.h>

// Función para calcular el producto de una serie fraccionaria
float productoFraccionario(int n) {
    float producto = 1;

    for (int i = 1; i <= n; i++) {
        float numero;
        printf("Ingrese el número fraccionario %d: ", i);
        scanf("%f", &numero);
        producto *= numero;
    }

    return producto;
}

int main() {
    int cantidad;

    printf("Ingrese la cantidad de números fraccionarios a multiplicar: ");
    scanf("%d", &cantidad);

    float resultado = productoFraccionario(cantidad);

    printf("El producto de los %d números fraccionarios es: %.2f\n", cantidad, resultado);

    return 0;
}
