/*
 *2) Generar los n (valor ingresado por el usuario) primeros números naturales e
informar por pantalla un listado de cada número generado junto con el factorial
correspondiente. Utilizar una función que dado un número devuelva su factorial.
Validar que el número ingresado sea entero positivo, caso contrario se le debe
indicar al usuario que el número es incorrecto y se le solicita el ingreso
nuevamente.
Ejemplo:
n = 6
EL factorial de 1 es 1
EL factorial de 2 es 2
EL factorial de 3 es 6
EL factorial de 4 es 24
 */

#include <stdio.h>

int Factorial(int num) {
    int factorial = 1;
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }
    return factorial;
}

void MensajeFinal(int num, int factorial) {
    printf("El factorial de %d es %d\n", num, factorial);
}

int InputUsuario() {
    int n;
    do {
        printf("Ingrese un valor n (entero positivo): ");
        scanf("%d", &n);
        if (n <= 0) {
            printf("Número incorrecto, intente nuevamente.\n");
        }
    } while (n <= 0);
    return n;
}

void ListaN(int n) {
    for (int i = 1; i <= n; i++) {
        MensajeFinal(i, Factorial(i));
    }
}

int main(void) {
    printf("Lista de factoriales\n");
    int n = InputUsuario();
    ListaN(n);
    return 0;
}
