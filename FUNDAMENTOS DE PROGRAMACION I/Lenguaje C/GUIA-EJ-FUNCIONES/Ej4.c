/*
 *4) Escribir una función que dados 2 números, calcule el porcentaje que el
primero representa respecto del segundo.
 */

#include <stdio.h>

int calculoPorcentaje(int num1, int num2){
    return ( 100 * num2 )/ num1; 
}

int main(){
    int n1,n2;
    printf("Ingrese el primer valor que va a ser el porcentaje: ");
    scanf("%d",& n1);

    printf("Ingrese el segundo valor base: ");
    scanf("%d",& n2);

    printf("El porcentaje de %d respecto al segundo %d es: %d%% \n",n1,n2,calculoPorcentaje(n1,n2) );
    return 0;
}