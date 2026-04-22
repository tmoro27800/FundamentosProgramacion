/*
 * 
 */

#include <stdio.h>

int resta_sucesivas(int a, int b) {
    int cociente = 0;
    int resto = a;
    
    if (b == 0) {
        printf("Error: el divisor no puede ser 0. ");
        return -1;
    }

    while (resto >= b) {
        resto = resto - b;
        cociente++;
    }

    return cociente;
}

int main() {    
    printf("EJEMPLO DE CASOS\n");
    printf("8 / 4  -> Cociente: %d \n", resta_sucesivas(8, 4));
    printf("15 / 4 -> Cociente: %d \n", resta_sucesivas(15, 4));
    printf("15 / 20 -> Cociente: %d \n", resta_sucesivas(15, 20));
    printf("10 / 0  -> "); 
    resta_sucesivas(10, 0);

    return 0;
}