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
    int mayor, menor;

    printf("Ingrese un numero: ");
    scanf("%d", &n);

    // Inicializar con el primer dígito
    digito = n % 10;
    mayor = digito;
    menor = digito;

    while (n != 0) {
        digito = n % 10;

        if (digito > mayor) {
            mayor = digito;
        }

        if (digito < menor) {
            menor = digito;
        }

        n = n / 10;
    }

    printf("Mayor digito: %d\n", mayor);
    printf("Menor digito: %d\n", menor);

    return 0;
}