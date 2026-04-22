/*
 * 
 */

#include <stdio.h>

int CalculadoraDias(int anio, int mes){
    if ( mes == 2 && ( (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0) ) )
        return 29;

    if ( mes == 2 )
        return 28;

    if ( mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12 )
        return 31;

    if ( mes == 4 || mes == 6 || mes == 9 || mes == 11 )
        return 30;

    return -1;

int main(){    
    int m,a;

    printf("Ingrese el mes: ");
    scanf("%d",&m);

    if ( m < 1 || m > 12){
        printf("Error\n");
        return 0;
    }

    printf("Ingrese el año: ");
    scanf("%d",&a);

    printf("El mes tiene %d dias\n", CalculadoraDias(a, m));

    return 0;
}