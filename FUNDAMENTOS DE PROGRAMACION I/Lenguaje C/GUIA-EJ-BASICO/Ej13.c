/*
Solicitar un número entero positivo al usuario y calcular su factorial. En el caso de
ingresar un número negativo mostrar un mensaje que diga “no se puede calcular el factorial
del número ingresado”.
Recordar que por definición factorial(0)=1 y factorial(1)=1
 */

#include <stdio.h>

void main(){
    
    long long factorial = 1;
    int n;

    printf("Ingrese un numero positivo: ");
    scanf("%d",& n);

    if ( n < 0 ){
        printf("Error, no se puede calcular el factorial del numero ingresado \n");
        return;
    }

    for (int i=1; i < n; i++){
        factorial *= i;
    }
    printf("El numero factorial de %d es: %lld \n", n,factorial);
    return;
}