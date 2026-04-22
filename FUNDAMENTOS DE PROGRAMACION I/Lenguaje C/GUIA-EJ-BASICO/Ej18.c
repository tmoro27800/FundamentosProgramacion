/*
Se realiza una encuesta para estimar el grado de aceptación de los productos x e y en
el mercado. A cada encuestado se le pregunta si consume el producto x y si consume el
producto y. La respuesta puede ser sí o no.
Se pide calcular e informar el porcentaje de consumidores de:
a) del producto x
b) del producto y
c) del producto x solamente
d) del producto y solamente
e) de ambos productos
f) de ninguno de los productos
 */

#include <stdio.h>

int main() {
    int n;
    int x, y;

    int contX = 0;
    int contY = 0;
    int soloX = 0;
    int soloY = 0;
    int ambos = 0;
    int ninguno = 0;

    printf("Ingrese la cantidad de encuestados: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEncuestado %d\n", i + 1);

        printf("Consume producto X? (1=Si, 0=No): ");
        scanf("%d", &x);

        printf("Consume producto Y? (1=Si, 0=No): ");
        scanf("%d", &y);

        if (x == 1){ 
            contX++;
        }
        if (y == 1){ 
            contY++;
        }

        if (x == 1 && y == 1) {
            ambos++;
        } else if (x == 1 && y == 0) {
            soloX++;
        } else if (x == 0 && y == 1) {
            soloY++;
        } else {
            ninguno++;
        }
    }

    printf("\nResultados:\n");
    printf("a) %% que consume X: %.2f%%\n", (contX * 100.0) / n);
    printf("b) %% que consume Y: %.2f%%\n", (contY * 100.0) / n);
    printf("c) %% solo X: %.2f%%\n", (soloX * 100.0) / n);
    printf("d) %% solo Y: %.2f%%\n", (soloY * 100.0) / n);
    printf("e) %% ambos: %.2f%%\n", (ambos * 100.0) / n);
    printf("f) %% ninguno: %.2f%%\n", (ninguno * 100.0) / n);

    return 0;
}