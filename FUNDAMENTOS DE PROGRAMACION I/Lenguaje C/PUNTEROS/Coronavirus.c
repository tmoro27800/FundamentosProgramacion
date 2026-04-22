#include <stdio.h>

int main() {
    int cant_casos = 0;
    int cant_maximo_casos, cant_minimo_casos;
    float total_casos = 0;
    int contador_paises = 0;
    float promedio = 0;

    printf("Ingrese la cantidad de casos (-1 para terminar): ");
    scanf("%d", &cant_casos);

    if (cant_casos != -1) {
        
        cant_maximo_casos = cant_casos;
        cant_minimo_casos = cant_casos;

        while (cant_casos != -1) {
            total_casos = total_casos + cant_casos;
            contador_paises++;

            if (cant_casos > cant_maximo_casos) {
                cant_maximo_casos = cant_casos;
            }

            if (cant_casos < cant_minimo_casos) {
                cant_minimo_casos = cant_casos;
            }

            printf("Ingrese la cantidad de casos (-1 para terminar): ");
            scanf("%d", &cant_casos);
        }
        promedio = total_casos / contador_paises;

        printf("Paises analizados: %d\n", contador_paises);
        printf("Maximo de casos: %d\n", cant_maximo_casos);
        printf("Minimo de casos: %d\n", cant_minimo_casos);
        printf("Total acumulado: %f\n", total_casos);
        printf("Promedio por pais: %.2f\n", promedio);
    }

    return 0;
}