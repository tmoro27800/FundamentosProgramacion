/*
 *8) Escribir una función que dados a y b devuelva el resto de la división entera,
sin utilizar el operador correspondiente de lenguaje. Para esta resolución deben
considerar la utilización de restas sucesivas.
 */

#include <stdio.h>

int calcularResto(int a, int b){
    int resto = a;
    
    if (b == 0) {
        printf("Error: el divisor no puede ser 0. ");
        return -1;
    }

    while (resto >= b) {
        resto = resto - b;
    }

    return resto;
}

void main(){
    int a,b;

    printf("Ingrese un valor a: ");
    scanf("%d",& a);

    printf("Ingrese un valor b: ");
    scanf("%d",& b);

    printf("El resto de esta division a,b --> %d", calcularResto(a,b));

    return;
}