/*
 *
 */

#include <stdio.h>
#include <string.h>

#include <stdio.h>
#include <string.h>

void InputUsuario(char texto[], int tam) {
    int largo;
    do {
        printf("Ingrese un Texto: ");
        fgets(texto, tam, stdin);

        // eliminar salto de línea si existe
        largo = strlen(texto);
        if (largo > 0 && texto[largo - 1] == '\n') {
            texto[largo - 1] = '\0';
            largo--;
        }

        if (texto[largo - 1] != '.') {
            printf("El texto debe terminar con .\n");
        }
    } while (texto[largo - 1] != '.');
}

int CantVocales(char texto[]){
    char vocales[] = "AEIOUaeiouáéíóú";
    int cantVocales = 0;
    int largoTexto = strlen(texto);
    int largoVocales = strlen(vocales);

    for(int l = 0; l < largoTexto; l++){
        int esVocal = 0; // bandera
        for(int i = 0; i < largoVocales; i++){
            if (texto[l] == vocales[i]){
                esVocal = 1; // lo marcamos como vocal
            }
        }
        if (esVocal == 1){
            cantVocales++;
        }
    }
    return cantVocales;
}

void main(){
    char texto[200];
    InputUsuario(texto, sizeof(texto));
    printf("\nLa palabra: %s contiene %d vocales en si mismo\n",texto,CantVocales(texto));
    return;
}