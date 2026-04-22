/*
 *5) Escribir una función que dados a y b ambos de tipo entero devuelva a ^ b de
    tipo double para los siguientes casos (no se puede utilizar ninguna biblioteca
    de funciones matemáticas). Implementar una solución iterativa.
    En las pruebas debe invocar a la función para los siguientes 5 casos:
    i) a > 0 y b > 0
    ii) a > 0 y b < 0
    iii) a < 0 y b > 0
    iv) a < 0 y b < 0
    v) a > 0 y b = 0
    Ejemplos:
    i) a = 2 ; b = 3 ; resultado = 8
    ii) a = -2 ; b = 3 ; resultado = 8
    iii) a = -2 ; b = 0 ; resultado = 1
    iv) a = -2 ; b = 0 ; resultado = 1
 */

#include <stdio.h>

double ExponerAyB(int a, int b) {
    if (b == 0) return 1.0;

    double resultado = 1.0;
    int exp = b > 0 ? b : -b;

    // cálculo iterativo
    int i = 0;
    while (i < exp) {
        resultado *= a;
        i++;
    }

    if (b < 0) {
        resultado = 1.0 / resultado;
    }

    return resultado;
}

int main() {
    int a, b;
    printf("Calcular a ^ b\n");

    printf("Ingrese valor a: ");
    scanf("%d", &a);

    printf("Ingrese valor b: ");
    scanf("%d", &b);

    printf("El valor de a -> %d\n", a);
    printf("El valor de b -> %d\n", b);
    printf("El resultado -> %f\n", ExponerAyB(a, b));

    return 0;
}
