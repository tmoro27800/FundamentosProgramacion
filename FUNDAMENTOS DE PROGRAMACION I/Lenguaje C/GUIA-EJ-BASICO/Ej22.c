/*
Se tiene un listado de alumnos que consiste en número de padrón y 4 notas por
alumno. Informar el mayor y el menor promedio registrado junto con el número de
padrón del alumno, suponiendo que ambos son únicos.
 */

#include <stdio.h>

int main() {
    int cant_alumnos, padron, nota;
    int mejor_prom_padron, peor_prom_padron;
    
    // Inicializamos con valores que obliguen a la primera comparación a ser verdadera
    float mejor_prom = -1.0; 
    float peor_prom = 11.0;

    printf("Ingrese la cantidad de alumnos a ingresar notas: ");
    scanf("%d", &cant_alumnos);

    for (int i = 0; i < cant_alumnos; i++) {
        int suma_notas = 0; // Se reinicia para cada alumno

        printf("\n--- Alumno %d ---\n", i + 1);
        printf("Ingrese el Padron: ");
        scanf("%d", &padron);

        for (int x = 1; x <= 4; x++) {
            printf("Ingrese la nota %d: ", x);
            scanf("%d", &nota);

            if (nota > 10 || nota < 0) {
                printf("Nota invalida. Se asigna 0.\n");
                nota = 0;
            }
            suma_notas += nota;
        }

        float promedio = suma_notas / 4.0; // 4.0 fuerza la división decimal
        printf("PROMEDIO: %.2f\n", promedio);

        // Lógica para el Mayor
        if (promedio > mejor_prom) {
            mejor_prom = promedio;
            mejor_prom_padron = padron;
        }

        // Lógica para el Menor
        if (promedio < peor_prom) {
            peor_prom = promedio;
            peor_prom_padron = padron;
        }
    }

    printf("\n========================================\n");
    printf("MAYOR promedio: %.2f (Padron: %d)\n", mejor_prom, mejor_prom_padron);
    printf("MENOR promedio: %.2f (Padron: %d)\n", peor_prom, peor_prom_padron);
    printf("========================================\n");

    return 0;
}