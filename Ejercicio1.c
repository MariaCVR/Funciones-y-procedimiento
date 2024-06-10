// Utilice el bucle while ya que no conocía cuantos dígitos tendría el numero ingresado por el usuario.
#include <stdio.h>
// Función para calcular la suma de los dígitos de un número
int sumaDigitos(int num) {
    int suma = 0;//Inicialización de la variable suma con un valor de 0
    while (num != 0) { 
        suma += num % 10; // Agrega el último dígito a la suma
        num /= 10; // Elimina el último dígito del número
    }
    return suma;
}
int main() {
    int numero;
    printf("Ingrese un número: ");
    scanf("%d", &numero);
    int suma = sumaDigitos(numero); // Llama a la función sumaDigitos
    printf("La suma de los dígitos es: %d\n", suma);
    return 0;
}
