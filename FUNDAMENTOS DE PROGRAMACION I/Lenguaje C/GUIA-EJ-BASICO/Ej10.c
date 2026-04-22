/*
Dada una fecha con año, mes y día, informar si es correcta o no.
Solicitarle los datos al usuario de forma independiente.
Considerar años bisiestos.
*/

#define ANIO_ACTUAL 2026
#include <stdio.h>
#include <stdbool.h>

int main() {
    int anio, mes, dia;
    bool esBisiesto;

    printf("Ingrese el año: ");
    scanf("%d", &anio);

    if (anio < 0 || anio > ANIO_ACTUAL) {
        printf("Error, Año erroneo\n");
        return 0;
    }

    esBisiesto = (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);

    printf("Ingrese el mes: ");
    scanf("%d", &mes);

    if (mes < 1 || mes > 12) {
        printf("Error al ingresar el mes\n");
        return 0;
    }

    printf("Ingrese el dia: ");
    scanf("%d", &dia);

    int diasMes;

    if (mes == 2) {
        diasMes = esBisiesto ? 29 : 28;
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        diasMes = 30;
    } else {
        diasMes = 31;
    }

    if (dia < 1 || dia > diasMes) {
        printf("Error, Fecha inexistente\n");
        return 0;
    }

    printf("Fecha verificada existente\n");

    return 0;
}