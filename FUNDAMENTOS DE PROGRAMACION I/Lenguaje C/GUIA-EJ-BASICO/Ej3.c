/*
Ingresar el radio de una esfera y calcular el volumen.
*/

#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main() {
    float radio, volumen;

    printf("Ingrese el radio de una esfera: ");
    scanf("%f", &radio);

    // Fórmula: (4/3) * PI * radio^3
    // Usamos pow(base, exponente) de math.h
    volumen = (4.0 / 3.0) * PI * pow(radio, 3);

    printf("El volumen de la esfera es: %.2f\n", volumen);

    return 0;
}