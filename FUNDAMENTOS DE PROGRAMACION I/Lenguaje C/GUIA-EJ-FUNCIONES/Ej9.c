/*
 *
 */

#include <stdio.h>

int Potenciar10(int exponente) {
    int resultado = 1;
    for (int i = 0; i < exponente; i++) {
        resultado *= 10;
    }
    return resultado;
}

int ObtenerValor(int valor, int longitud, int posicionInicial) {
    int ValorPosicionado = valor / Potenciar10(posicionInicial);
    int obtenerDigitos = ValorPosicionado % Potenciar10(longitud);
    return obtenerDigitos;
}

void ParametrizadorFechas(int valor, int *dia, int *mes, int *anio) {
    *anio = ObtenerValor(valor, 4, 4);
    *mes  = ObtenerValor(valor, 2, 2);
    *dia  = ObtenerValor(valor, 2, 0);
}

int main() {
    int fecha;
    int dia, mes, anio;

    printf("Ingrese una fecha (Formato: AAAA/MM/DD 8 Digitos): ");
    scanf("%d", &fecha);

    ParametrizadorFechas(fecha, &dia, &mes, &anio);

    printf("Tu fecha %d se descompuso en:\n", fecha);
    printf("dia: %d\nmes: %d\naño: %d\n", dia, mes, anio);

    return 0;
}
