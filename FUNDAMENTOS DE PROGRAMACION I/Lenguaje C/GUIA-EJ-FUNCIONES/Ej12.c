/*
 *12) Escribir una función que reciba dos valores enteros, y devuelva el máximo
común divisor entre ambos números. Recordemos que se define el máximo
común divisor (MCD) de dos o más números enteros al mayor número entero
que los divide sin dejar resto alguno. Utilizar el algoritmo de Euclides
 */

#include <stdio.h>

int MaximoComunDivisor(int a, int b) {
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

int main() {
    int a, b;
    printf("Ingrese valor a: ");
    scanf("%d", &a);

    printf("Ingrese valor b: ");
    scanf("%d", &b);

    printf("MCD -> %d\n", MaximoComunDivisor(a, b));

    return 0;
}
