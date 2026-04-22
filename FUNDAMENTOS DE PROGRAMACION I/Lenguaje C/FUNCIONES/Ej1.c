/*
Escribir una función que reciba un valor y calcule el factorial del mismo.
No debe imprimir el valor, debe solamente devolverlo.
Si no se puede calcular el factorial del valor recibido, la función deberá devolver 0, de lo contrario deberá devolver el valor calculado. 

Invocarla para los valores -8, 0, 1, 5; mostrando en cada caso lo que devuelve.

Definición: El factorial de un entero positivo n,  se define como el producto de todos los números enteros positivos desde 1 hasta n.  El factorial de 0 es 1.
 */

#include <stdio.h>

int calcularFactorial(int n){
    int factorial = 1;
    if (n < 0){
        factorial=0;
    } else {
        for ( int i=1; i <= n; i++){
            factorial = factorial * i; 
        }  
    }
    
    return factorial;
}

void main() {
    int resultado;
    int n;    

    printf("Pruebas de casos\n");
    printf("Valor: -8 -> Factorial: %d\n", calcularFactorial(-8));
    printf("Valor:  0 -> Factorial: %d\n", calcularFactorial(0));
    printf("Valor:  1 -> Factorial: %d\n", calcularFactorial(1));
    printf("Valor:  5 -> Factorial: %d\n", calcularFactorial(5));

    printf("\nPrueba de caso propio\n");
    printf("Ingrese un numero y calculo factorial: ");
    scanf("%d",&n);
    printf("El factorial de %d es: %d \n", n, calcularFactorial(n));
    
    return;
}