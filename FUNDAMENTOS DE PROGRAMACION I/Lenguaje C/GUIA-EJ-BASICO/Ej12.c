/*
Dados a y n números enteros, informar la potencia enésima de a por productos
sucesivos.
 */

#include <stdio.h>

int main() {
    int a, n;
    int resultado = 1;

    printf("Ingresa el numero que se va a potenciar: ");
    scanf("%d", &a);

    printf("Ingresa n veces a potenciar: ");
    scanf("%d", &n);

    if (n == 0) {
        resultado = 1;
    } else {
        for (int i = 0; i < n; i++) {
            resultado = resultado * a;
        }
    }

    printf("El numero potenciado quedo: %d\n", resultado);

    return 0;
}