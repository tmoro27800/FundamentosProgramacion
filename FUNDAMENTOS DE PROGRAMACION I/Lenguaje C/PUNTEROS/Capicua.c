#include <stdio.h>

int main() {
    int N, AUX, INV;

    printf("Ing un nro: ");
    scanf("%d", &N);

    AUX = N;            // Guardamos el original
    INV = AUX % 10;     // PASO 1: Sacamos el último dígito ANTES del bucle

    // El bucle corre mientras el número tenga más de un dígito
    while (AUX > 9) {
        AUX = AUX / 10;                // Quitamos el dígito que ya usamos
        INV = (INV * 10) + (AUX % 10); // Agregamos el nuevo dígito al invertido
    }

    // Al final comparamos el original con el resultado
    if (N == INV) {
        printf("Es Capicua\n");
    } else {
        printf("No es capicua\n");
    }

    return 0;
}