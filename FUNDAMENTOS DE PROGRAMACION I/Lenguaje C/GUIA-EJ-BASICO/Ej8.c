/*
Ingresar un número (del 1 al 12) que representa un mes, indicar la cantidad de
días de dicho mes.
 */

#include <stdio.h>

void main() {
    int m;
    printf("Ingrese un numero que representa el mes (1-12): ");
    scanf("%d",& m);

    switch (m)
    {
    case 1:
        printf("Enero");
        break;
    case 2:
        printf("Febrero");
        break;
    case 3:
        printf("Marzo");
        break;
    case 4:
        printf("Abril");
        break;
    case 5:
        printf("Mayo");
        break;
    case 6:
        printf("Junio");
        break;
    case 7:
        printf("Julio");
        break;
    case 8:
        printf("Agosto");
        break;
    case 9:
        printf("Septiembre");
        break;
    case 10:
        printf("Octubre");
        break;
    case 11:
        printf("Noviembre");
        break;
    case 12:
        printf("Diciembre");
        break;
    default:
        printf("Error, mes fuera de rango");
        break;
    }
}