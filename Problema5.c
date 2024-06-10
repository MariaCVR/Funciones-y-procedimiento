//Utilice el bucle for porque comnocemos la cantidad de numeros de la serie Fibonaccio que vamos a mostrar.
#include <stdio.h>
// Función para calcular la serie de Fibonacci 
void calcularFibonacci(int n) {
    int termino1 = 0, termino2 = 1, siguienteTermino;
    printf("Los primeros %d términos de la serie de Fibonacci son:\n", n);
    // Imprimir los primeros dos términos de la serie
    printf("%d ", termino1);
    printf("%d ", termino2);

    // Calcular y mostrar los siguientes términos de la serie
    for (int i = 3; i <= n; i++) {
        siguienteTermino = termino1 + termino2;
        printf("%d ", siguienteTermino);
        termino1 = termino2;
        termino2 = siguienteTermino;
    }

    printf("\n");
}

int main() {
    int n;
    printf("Ingrese el número de términos de la serie de Fibonacci que desea mostrar: ");
    scanf("%d", &n);
    calcularFibonacci(n);
    return 0;
}

