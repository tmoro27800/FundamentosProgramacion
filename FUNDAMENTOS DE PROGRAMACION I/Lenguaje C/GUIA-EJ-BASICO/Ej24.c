/*
Documentacion aparte parae esto EJ24.MD
 */

#include <stdio.h>
#include <stdbool.h>

int main() {
    int peso = 1;
    int altura = 0;
    int cantActual = 0;
    int pesoActual = 0;
    const int PESO_MAX = 1500;
    const int CANT_MAX = 20;

    printf("========================================\n");
    printf("BIENVENIDO AL JUEGO: PARQUE DE DIVERSIONES\n");
    printf("========================================\n");

    while (true) {
        printf("\nParticipante %d - Ingrese peso (0 para terminar): ", cantActual + 1);
        scanf("%d", &peso);

        if (peso == 0) break;

        printf("Participante %d - Ingrese altura (cm): ", cantActual + 1);
        scanf("%d", &altura);

        bool cumpleAltura = (altura >= 160 && altura <= 190);
        bool cabePeso = (pesoActual + peso <= PESO_MAX);

        // Validacion de Altura
        if (!cumpleAltura) {
            printf("Altura del participante fuera de rango permitido.\n");
            continue; // Salta al siguiente ciclo del while
        }

        // Validacion de Peso
        if (!cabePeso) {
            printf("Peso total excedido, el participante no puede subir.\n");
            continue; // Ignora a este participante y sigue pidiendo
        }

        // Si llegó acá, cumple todo: lo subimos
        cantActual++;
        pesoActual += peso;
        printf(">> Participante aceptado. (Total: %d kg - %d personas)\n", pesoActual, cantActual);

        // Condiciones de inicio AUTOMÁTICO
        if (pesoActual == PESO_MAX) {
            printf("\n[!] Peso maximo exacto alcanzado.");
            break;
        }
        if (cantActual == CANT_MAX) {
            printf("\n[!] Cantidad maxima de participantes alcanzada.");
            break;
        }
    }

    // Resultado final
    if (cantActual > 0) {
        printf("\n========================================\n");
        printf("EL JUEGO VA A COMENZAR... ¡A DIVERTIRSE!\n");
        printf("Participantes: %d | Peso Total: %d kg\n", cantActual, pesoActual);
        printf("========================================\n");
    } else {
        printf("\nEL JUEGO NO TIENE JUGADORES. Simulacion terminada.\n");
    }

    return 0;
}