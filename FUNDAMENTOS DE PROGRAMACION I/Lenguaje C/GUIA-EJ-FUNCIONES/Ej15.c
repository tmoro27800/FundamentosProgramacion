/*
 *
 */

#include <stdio.h>

int Exponer(int n, int exponente) {
    int resultado = 1;
    for (int i = 0; i < exponente; i++) {
        resultado *= n;
    }
    return resultado;
}

long long Factorial(int n) {
    long long factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    return factorial;
}

double CalcularSeno(double x, int terminos) {
    double suma = 0.0;
    for (int k = 0; k < terminos; k++) {
        int exp = 2*k + 1;
        double termino = ((k % 2 == 0) ? 1 : -1) * (Exponer(x, exp) / (double)Factorial(exp));
        suma += termino;
    }
    return suma;
}

int main() {
    double x;
    int n;
    printf("CALCULAR APROXIMACION SENO\n");
    printf("Ingrese un numero (en radianes): ");
    scanf("%lf", &x);

    printf("Ingrese cantidad de terminos: ");
    scanf("%d", &n);

    printf("Aproximacion de Seno -> %f\n", CalcularSeno(x, n));
    return 0;
}
