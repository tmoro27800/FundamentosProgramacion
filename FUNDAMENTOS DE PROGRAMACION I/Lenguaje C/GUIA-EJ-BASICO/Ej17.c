/*
Generar un dibujo por pantalla con el siguiente patrón solicitando al usuario la altura.
Ejemplo: altura=5 debe dibujar por pantalla:
*
**
***
****
*****
 */

#include <stdio.h>

int main() {
    int alt;

    printf("Ingrese la altura: ");
    scanf("%d", &alt);

    for (int i = 1; i <= alt; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}