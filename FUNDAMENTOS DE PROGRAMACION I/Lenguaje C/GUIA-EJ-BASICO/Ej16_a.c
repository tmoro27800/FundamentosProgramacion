/*
Dado un número entero positivo ingresado por el usuario, procesarlo e indicar:
(realizar un programa diferente para cada caso)
a) La cantidad de dígitos pares e impares que lo componen.
b) El menor y el mayor dígito del número.
Recordar uso de división y módulo:
Ejemplo:
111 / 10 = 11
111 % 10 = 1
 */

#include <stdio.h>

int main() {
    int n, digito;
    int pares = 0, impares = 0;

    printf("Ingrese un numero: ");
    scanf("%d", &n);

    while (n != 0) {
        digito = n % 10;

        if (digito % 2 == 0) {
            pares++;
        } else {
            impares++;
        }

        n = n / 10;
    }

    printf("Cantidad de pares: %d\n", pares);
    printf("Cantidad de impares: %d\n", impares);

    return 0;
}