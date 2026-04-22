/*
2) Escribir una función que dado un número entero, devuelva un valor booleano
que indique si dicho número es primo o no. Antes de plantear una solución ten
presente las siguientes preguntas.
a) Con sólo encontrar un divisor del número a evaluar distinto a uno y a sí
mismo, ya puedo afirmar que el número no es primo. ¿Tiene sentido seguir
evaluando más divisores?
b) Teniendo en cuenta que todo número par a excepción del 2, no es primo,
¿Tiene sentido seguir en un ciclo, si al calcular el resto de la división del número
a evaluar por 2, el resultado es cero?
c) Puedo encontrar un divisor del número a evaluar que sea mayor al número a
evaluar dividido 2?
 */

#include <stdio.h>
#include <stdbool.h>

bool es_primo(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;

    int i = 3;
    while (i * i <= num) {
        if (num % i == 0) {
            return false;
        }
        i += 2;
    }
    return true;
}

int main() {
    int n;
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    if (es_primo(n)) {
        printf("El numero %d es primo\n", n);
    } else {
        printf("El numero %d no es primo\n", n);
    }
    return 0;
}

