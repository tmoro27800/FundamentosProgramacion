/*
Calcular y mostrar la suma de los n primeros números naturales. Siendo n un
número ingresado por el usuario. Usar fórmula [ n.(n+1) ] / 2
*/
#include <stdio.h>

int main(){
    int n;
    int calculo;
    printf("Ingrese un numero Natural: ");
    scanf("%d",& n);
    
    calculo= (n*(n+1))/2.0;
    
    printf("El calculo de la suma de los %d primeros numeros naturales es: %d" ,n,calculo);
    
    return 0;
}