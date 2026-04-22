/*
 *6) Escribir una función que dado un número entero positivo retorne un valor
booleano que indique si el mismo es capicúa (palindromo).
 */

#include <stdio.h>
#include <stdbool.h>

bool es_capicua(int num){
    if (num < 0) return false;

    int original = num;
    int invertido = 0;

    while (num > 0){
        int digito = num % 10;
        invertido = invertido * 10 + digito;
        num /= 10; 
    }

    return original == invertido;
}

void main(){
    int n;
    printf("Ingrese un valor para ver si es Capicua: ");
    scanf("%d",& n);

    if (es_capicua(n)){
        printf("El numero es Capicua\n");
    } else {
        printf("El numero no es Capicua\n");
    }

    return;
}