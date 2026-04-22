#include <stdio.h>

int main() {
    int n;
    int mayor, menor;
    int suma = 0;
    int contador = 0;

    printf("Ingresa un numero (0 para terminar): ");
    scanf("%d", &n);

    if (n == 0) {
        printf("No se ingresaron numeros.\n");
        return 0;
    }

    // Inicializar mayor y menor con el primer valor válido
    mayor = n;
    menor = n;

    while (n != 0) {
        suma += n;
        contador++;

        if (n > mayor) {
            mayor = n;
        }

        if (n < menor) {
            menor = n;
        }

        printf("Ingresa un numero (0 para terminar): ");
        scanf("%d", &n);
    }

    float promedio = (float)suma / contador;

    printf("El numero mayor es: %d\n", mayor);
    printf("El numero menor es: %d\n", menor);
    printf("El promedio es: %.2f\n", promedio);

    return 0;
}