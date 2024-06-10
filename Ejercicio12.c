//Utilice el bucle for porque comnocemos por medio del usuario la cantidad exacta de interacuiones que se den de hacer. 

#include <stdio.h>

// Función para sumar los números impares hasta un número dado
int sumarImpares(int n) {
    int i, suma = 0;

    // Bucle for para recorrer los números desde 1 hasta n
    for (i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            suma += i; // Sumar el número impar a la suma total
        }
    }

    return suma;
}

int main() {
    int numero;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    int sumaImpares = sumarImpares(numero);

    printf("La suma de los números impares hasta %d es %d.\n", numero, sumaImpares);

    return 0;
}

