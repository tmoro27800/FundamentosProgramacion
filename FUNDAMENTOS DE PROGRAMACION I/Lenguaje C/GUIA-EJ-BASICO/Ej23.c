/*
 Escribir un programa que simule el proceso de control de peso y cantidad de personas
que puede transportar un ascensor.
Vamos a suponer que nuestro ascensor puede soportar un máximo de 400 kg y hasta 6
personas.
Nuestra simulación debe proceder del siguiente modo:
- A medida que las personas ingresan al ascensor de a una a la vez, se registra el
peso de la persona.
- Supondremos que el ingreso de 0 kg, indica que no hay más personas por subir al
ascensor.
- Si en un determinado momento del ingreso de las personas, se supera el peso
máximo, el ascensor, advertirá mediante un mensaje, que indique que se ha
excedido el peso máximo y nuestra simulación terminará.
- De igual modo, si el ascensor detecta que ha subido una séptima persona al
ascensor, deberá advertir de esto, y nuestra simulación terminará.
 */

#include <stdio.h>

int main() { // Cambiado a int main
    int pesoMaximo = 400;
    int cantPersonasMax = 6;
    int peso;
    int pesoActual = 0;
    int cantActual = 0;

    printf("======================\nBIENVENIDO AL ASCENSOR\n======================\n");

    while (1) {
        printf("\nPasajero %d - Ingrese su peso (0 para terminar): ", cantActual + 1);
        scanf("%d", &peso);

        if (peso == 0) {
            break; 
        }

        if (cantActual + 1 > cantPersonasMax) {
            printf("\n[!] ERROR: Se ha detectado una septima persona. Capacidad maxima superada.\n");
            return 0;
        }

        cantActual++;
        pesoActual += peso;

        if (pesoActual > pesoMaximo) {
            printf("\n[!] ADVERTENCIA: Peso total (%d kg) excede el maximo de %d kg.\n", pesoActual, pesoMaximo);
            return 0;
        }
        
        printf("Estado actual: %d kg - %d persona(s)\n", pesoActual, cantActual);
    }

    printf("\n======================\nSIMULACION FINALIZADA EXITOSAMENTE\nSubieron %d personas con un peso total de %d kg.\n======================\n", cantActual, pesoActual);

    return 0;
}