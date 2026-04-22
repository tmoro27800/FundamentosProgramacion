#include <stdio.h>
#include <string.h>

void AnalizarTexto(char texto[], int *cantidadPalabras, int *cantidadAbonar) {
    int i = 0;
    int AporteAbonar = 0;
    int CantCaracteres = 0;
    int CantPalabras = 0;
    char PosicionAnterior = ' ';
    char PosicionActual;

    while (texto[i] != '\0') {
        PosicionActual = texto[i];

        if (PosicionAnterior == ' ' && PosicionActual != ' ' && PosicionActual != '\n') {
            // empieza una nueva palabra
            CantPalabras++;
            CantCaracteres = 1;
        } else if (PosicionAnterior != ' ' && PosicionActual != ' ' && PosicionActual != '\n') {
            // seguimos dentro de la palabra
            CantCaracteres++;
        } else if (PosicionAnterior != ' ' && (PosicionActual == ' ' || PosicionActual == '\n')) {
            // termina la palabra
            if (CantCaracteres > 3) {
                AporteAbonar += 10;
            } else {
                AporteAbonar += 8;
            }
        }

        PosicionAnterior = PosicionActual;
        i++;
    }

    *cantidadPalabras = CantPalabras;
    *cantidadAbonar = AporteAbonar;
}

void InputUsuario(char texto[], int tam) {
    printf("Ingrese un Telegrama: ");
    fgets(texto, tam, stdin);
}

int main(void) {
    char texto[200];
    int palabras, abonar;

    InputUsuario(texto, sizeof(texto));
    AnalizarTexto(texto, &palabras, &abonar);

    printf("Cantidad de palabras: %d\n", palabras);
    printf("Cantidad a abonar: %d\n", abonar);

    return 0;
}
