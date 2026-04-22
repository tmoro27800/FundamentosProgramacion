/*
 *3) Escribir una función que reciba un valor entero y calcule el factorial del
mismo. Si no se puede calcular el factorial del valor recibido, la función deberá
devolver 0, de lo contrario deberá devolver el valor calculado.
 */

#include <stdio.h>

long long calcular_factorial(int num){

    if (num < 0) return 0;
    
    long long factorial=1;

    for(int i=1; i<=num; i++){
        factorial=factorial*i;
    }
    return factorial;
}

int main(){
    int n;
    printf("Ingrese un numero para calcular Factorial: ");
    scanf("%d",& n);

    printf("Su factorial es: %lld\n", calcular_factorial(n));

    return 0;
}