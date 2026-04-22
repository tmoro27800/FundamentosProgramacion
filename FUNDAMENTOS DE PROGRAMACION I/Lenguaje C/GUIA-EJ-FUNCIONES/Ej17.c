/*
 *
 */

#include <stdio.h>

double CalculoPI(int n){
    double producto = 1.0;

    for(int i = 1; i <= n; i++){
        producto *= ( (2.0*i)/(2.0*i - 1) ) * ( (2.0*i)/(2.0*i + 1) );
    }

    return producto * 2; // π ≈ producto * 2
}

int main(){
    int n;

    printf("Calculo PI - Formula de Wallis\n");

    printf("Ingrese un valor n: ");
    scanf("%d",&n);

    printf("El valor aproximado de PI -> %lf\n", CalculoPI(n));

    return 0;
}