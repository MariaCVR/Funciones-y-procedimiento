//Utilice el bucle for porque en este caso comnocemos por medio del usuario la cantidad de veces que de debe de aplicar 
//las interaciomnes. 

#include <stdio.h>

// Función para sumar los números pares hasta un número dado
int sumarPares(int n) {
    int i, suma = 0;

    // Bucle for para recorrer los números desde 1 hasta n
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            suma += i; // Sumar el número par a la suma total
        }
    }

    return suma;
}

int main() {
    int numero;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    int sumaPares = sumarPares(numero);

    printf("La suma de los números pares hasta %d es %d.\n", numero, sumaPares);

    return 0;
}
