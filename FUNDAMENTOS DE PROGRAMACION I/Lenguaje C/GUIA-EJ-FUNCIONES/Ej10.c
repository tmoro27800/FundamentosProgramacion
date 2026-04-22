/*
 * 
 */

#include <stdio.h>

void calcularTiempo(long long total_seg, int *dias, int *horas, int *min, int *seg) {
    *dias = total_seg / 86400;
    long long resto = total_seg % 86400;

    *horas = resto / 3600;
    resto = resto % 3600;

    *min = resto / 60;
    *seg = resto % 60;
}

long long solicitarSegundos() {
    long long segundos_usuario;
    do {
        printf("Ingrese un valor representando una cantidad de segundos: ");
        scanf("%lld", &segundos_usuario);
        if (segundos_usuario < 0) {
            printf("Error: El valor debe ser positivo.\n");
        }
    } while (segundos_usuario < 0);
    
    return segundos_usuario;
}

int main() {
    int d, h, m, s;
    long long total;

    total = solicitarSegundos();
    calcularTiempo(total, &d, &h, &m, &s);

    printf("\nDESCOMPOSICION DE TIEMPO\n");
    printf("Total: %lld segundos\n", total);
    printf("Resultado: %d dias, %d horas, %d minutos, %d segundos\n", d, h, m, s);

    return 0;
}