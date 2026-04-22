/* 
Calcular el sueldo de un operario ingresando por teclado la cantidad de horas que
trabajó en el mes y el valor de la hora. Mostrarle el resultado al usuario con un
mensaje adecuado.
*/

#include <stdio.h>

void main(){

    float sueldo,cant_horas,calculo;

    printf("Ingrese la cantidad de horas al mes: ");
    scanf("%f",& cant_horas);
    printf("Ingrese el sueldo por hora: ");
    scanf("%f",& sueldo);

    calculo= cant_horas * sueldo;
    printf("El salario calculado por horas trabajas al mes es: %f", calculo);
    return;
}