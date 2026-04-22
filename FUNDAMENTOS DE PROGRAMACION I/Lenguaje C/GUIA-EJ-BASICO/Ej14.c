/*
Escribir un programa que muestre las tablas de multiplicar desde la tabla del 1 hasta la
tabla del 9 para los primeros 100 números naturales.
 */

#include <stdio.h>

void main(){
    int resultado;
    for (int i=1; i <= 100; i++){
        for(int x=1; x <= 10; x++){
            resultado= i*x;
            printf("%d x %d = %d \n",i,x,resultado);
        }
    }
    return;
}