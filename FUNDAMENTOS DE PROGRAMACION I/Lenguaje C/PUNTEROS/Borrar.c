#include <stdio.h>
#include <stdbool.h>

int main() {
    int N;
    bool EsPrimo = true;

    printf("Ingrese un Numero: ");
    scanf("%i", &N);

    if (N < 2) {
        EsPrimo = false;
    } else {
        int i = 2; // 1. Inicialización: Empezamos a probar desde el 2
        
        // 2. Condición: Mientras i sea menor a N Y sigamos pensando que es primo
        while (i < N && EsPrimo) {
            if (N % i == 0) {
                EsPrimo = false; // Encontramos un divisor
            }
            i++; // 3. Incremento: Pasamos al siguiente número
        }
    }

    if (EsPrimo) {
        printf("Es primo\n");
    } else {
        printf("No es primo\n");
    }

    return 0;
}