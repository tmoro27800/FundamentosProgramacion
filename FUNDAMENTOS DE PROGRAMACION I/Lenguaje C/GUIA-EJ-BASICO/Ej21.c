/*
Se dan como datos de entrada las fechas de nacimiento (día, mes, año) y los números
de DNI de cada integrante de un grupo.
Se indica fin de datos de entrada cuando día = 0.
Muestre por pantalla el número de DNI del integrante más joven del grupo.
 */
#include <stdio.h>

int main() {
    int dia, mes, anio;
    int dni, dni_joven;

    int anio_joven = -1, mes_joven, dia_joven;

    printf("Ingrese dia (0 para terminar): ");
    scanf("%d", &dia);

    while (dia != 0) {

        if (dia < 1 || dia > 31) {
            printf("Error en el dia\n");
        } else {
            printf("Ingrese mes: ");
            scanf("%d", &mes);

            if (mes < 1 || mes > 12) {
                printf("Error en el mes\n");
            } else {
                printf("Ingrese anio: ");
                scanf("%d", &anio);

                printf("Ingrese DNI: ");
                scanf("%d", &dni);

                // Comparar si es el más joven
                if (anio > anio_joven || (anio == anio_joven && mes > mes_joven) || (anio == anio_joven && mes == mes_joven && dia > dia_joven)) {
                    anio_joven = anio;
                    mes_joven = mes;
                    dia_joven = dia;
                    dni_joven = dni;
                }
            }
        }

        printf("\nIngrese dia (0 para terminar): ");
        scanf("%d", &dia);
    }

    if (anio_joven != -1) {
        printf("\nEl DNI del integrante mas joven es: %d\n", dni_joven);
    } else {
        printf("No se ingresaron datos validos\n");
    }

    return 0;
}